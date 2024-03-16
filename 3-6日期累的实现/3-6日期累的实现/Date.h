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
	//ȫȱʡ���캯��
	Date(int year = 1900, int month = 1, int day = 1);
	//�������캯��
	Date(const Date& d);

	void Print()
	{
		cout << _year << "/" << _month << "/" << _day << endl;
	}
	//>���������
	bool operator>(const Date& d);
	//==���������
	bool operator==(const Date& d);
	//>=���������
	bool operator>=(const Date& d);
	//!=���������
	bool operator!=(const Date& d);
	//<���������
	bool operator<(const Date& d);
	//<=���������
	bool operator<=(const Date& d);
	
	//����+=����
	Date& operator+=(int day);
	//����+����
	Date operator+(int day);
	//����-=����
	Date& operator-=(int day);
	//����-����
	Date operator-(int day);

	//ǰ��++
	Date& operator++();
	//����++
	Date operator++(int);
	//ǰ��--
	Date& operator--();
	//����--
	Date operator--(int);

	//����-����
	int operator-(const Date& d);
	
private:
	int _year;
	int _month;
	int _day;
};