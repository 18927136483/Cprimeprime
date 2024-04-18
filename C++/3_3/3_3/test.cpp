#include<iostream>
using namespace std;

//struct Stack
//{
//	void Init(size_t capacity)
//	{
//		_array = (int*)malloc(sizeof(int) * capacity);
//		//检查
//		_capacity = capacity;
//		_size = 0;
//	}
//	void Push(const int& data)
//	{
//		//扩容
//		_array[_size++] = data;
//	}
//	int* _array;
//	size_t _capacity;
//	size_t _size;
//};
//int main()
//{
//
//	return 0;
//}


//class Stack
//{
//	//private:
//public:
//	// 成员变量
//	int* a;
//	int top;
//	int capacity;
//
//public:
//	// 成员函数
//	void Init(int n = 4);
//	void Push(int x);
//};
//
//
//void Stack::Push(int x)
//{
//	//...
//	a[top++] = x;
//}

//class A
//{
//public:
//	void Print()
//	{
//		cout << "Print" << endl;
//	}
//private:
//	int _a;
//};
//
//class B
//{
//public:
//	void PrintB()
//	{
//		cout << _a << endl;
//	}
//private:
//	int _a;
//};
//int main()
//{
//	B* p = nullptr;
//	p->PrintB();
//	return 0;
//}

//class C
//{
//public:
//	void PrintC()
//	{
//		cout << "PrintC()" << endl;
//	}
//private:
//	int _a;	
//};
//int main()
//{
//	C* p = nullptr;
//	(*p).PrintC();
//	return 0;
//}

//class Data
//{
//public:
//	Data()
//	{}
//
//	Data(int year, int month, int day)
//	{
//		_year = year;
//		_month = month;
//		_day = day;
//	}
//private:
//	int _year;
//	int _month;
//	int _day;
//};

//class Data
//{
//public:
//		Data(int year=2024, int month=3, int day=3)
//		{
//			_year = year;
//			_month = month;
//			_day = day;
//		}
//	private:
//		int _year;
//		int _month;
//		int _day;
//};
//int main()
//{
//	Data d1;
//	Data d2(2015, 1, 1);
//	return 0;
//}



//class Time
//{
//public:
//	Time()
//	{
//		cout << "Time()" << endl;
//		_hour = 0;
//		_minute = 0;
//		_second = 0;
//	}
//private:
//	int _hour;
//	int	_minute;
//	int _second;
//};
//class Data
//{
////private:
////	//基本类型(内置类型)
////	int _year;
////	int _month;
////	int _day;
//private:
//	//声明给缺省值
//	int _year=2024;
//	int _month=3;
//	int _day;
//
//	//自定义类型
//	Time _t;
//};
//class Date
//{
//public:
//	Date()
//	{
//		_year = 2024;
//		_month = 3;
//		_day = 3;
//	}
//	Date(int year = 2024, int month = 3, int day = 3)
//	{
//		_year = year;
//		_month = month;
//		_day = day;
//	}
//private:
//	int _year;
//	int _month;
//	int _day;
//};
//int main()
//{
//	Date d;
//	return 0;
//}


class Time
{
public:
	~Time()
	{
		cout << "~Time()" << endl;
	}
private:
	int _hour;
	int _minute;
	int _second;
};
class Date
{
	//基本类型（内置类型）
private:
	int _year = 2024;
	int _month = 3;
	int _day = 3;
	//自定义类型
	Time _t;
};
int main()
{
	Date d;
	return 0;
}