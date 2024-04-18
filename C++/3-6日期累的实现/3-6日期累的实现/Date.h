#pragma once
#include<iostream>
#include <assert.h>
using namespace std;

class Date
{
public:
	int GetMonthDay(int year, int month)
	{
		assert(month > 0 && month < 13);
		static int monthdays[13] = { 0,31,28,31,30,31,30,31,31,30,31,30,31 };
		if (month == 2 && year % 4 == 0 && year % 100 != 0 || (year % 400 == 0))
		{
			return 29;
		}
		return monthdays[month];
	}
	//全缺省构造函数
	Date(int year = 1900, int month = 1, int day = 1);
	//拷贝构造函数
	Date(const Date& d);

	void Print()
	{
		cout << _year << "/" << _month << "/" << _day << endl;
	}
	//>运算符重载
	bool operator>(const Date& d);
	//==运算符重载
	bool operator==(const Date& d);
	//>=运算符重载
	bool operator>=(const Date& d);
	//!=运算符重载
	bool operator!=(const Date& d);
	//<运算符重载
	bool operator<(const Date& d);
	//<=运算符重载
	bool operator<=(const Date& d);
	
	//日期+=天数
	Date& operator+=(int day);
	//日期+天数
	Date operator+(int day);
	//日期-=天数
	Date& operator-=(int day);
	//日期-天数
	Date operator-(int day);

	//前置++
	Date& operator++();
	//后置++
	Date operator++(int);
	//前置--
	Date& operator--();
	//后置--
	Date operator--(int);

	//日期-日期
	int operator-(const Date& d);
	
private:
	int _year;
	int _month;
	int _day;
};