#include <iostream>
using namespace std;



//class A
//{
//public:
//	A(int a)
//	{
//		cout << "A" << endl;
//	}
//};
//
//class Date
//{
//public:
	/*Date(int year, int month, int day)
		: _year(year)
		, _month(month)
		, _day(day)
		_n = 1;
	{}*/

	/*Date(int year, int month, int day)
	{
		_n = 1;
		_year = year;
		_month = month;
		_day = day;

	}*/

//	Date(int year, int month, int day)
//		:_year(year)
//		, _month(month)
//		, _day(day)
//		,_aa(1)
//	{}
//private:
//	int _year;
//	int _month;
//	int _day;
//	A _aa;
//
//};
//
//int main()
//{
//	/*int i = 1;
//
//	int d = i;*/
//
//	int i = 1;
//
//	//double& d = i;
//
//	A cc2 = 4;
//
//	Date aa1 = { 1,2,3 };
//	const Date& aa2={ 1,2, 3};
//
//	return 0;
//}


//class A
//{
//public:
//	A(int a)
//		:_a1(a)
//		,_a2(_a1)
//	{}
//	void Print()
//	{
//		cout << _a1 << " "<<_a2 << endl;
//	}
//private:
//	int _a2;
//	int _a1;
//};
//int main()
//{
//	A aa(1);
//	aa.Print();
//	return 0;
//}

//class Date
//{
//public:
//	explicit Date(int year)
//		:_year(year)
//	{}
//	Date& operator=(const Date& d)
//	{
//		if (this != &d)
//		{
//			_year = d._year;
//			_month = d._month;
//			_day = d._year;
//		}
//		return *this;
//	}
//private:
//	int _year;
//	int _month;
//	int _day;
//};
//void Test()
//{
//	Date d1(2022);
//	d1 = 2023;
//}
//
//int main()
//{
//	Test();
//	return 0;
//}



//class A
//{
//public:
//	A() { ++_scount; }
//
//	A(const A& t) { ++_scount; }
//
//	~A() { --_scount; }
//
//	static int GetACount() { return _scount; }
//private:
//	static int _scount;
//};
//
//int A::_scount = 0;
//void TestA()
//{
//	cout << A::GetACount() << endl;
//	A a1, a2;
//	A a3(a1);
//	cout << A::GetACount() << endl;
//}
//int main()
//{
//	TestA();
//	return 0;
//}


//class Date
//{
//public:
//	Date(int year, int month, int day)
//		:_year(year)
//		,_month(month)
//		,_day(day)
//	{}
//	friend ostream& operator<<(ostream& _cout,const Date& d);
//private:
//	int _year;
//	int _month;
//	int _day;
//};
//ostream& operator<<(ostream& _cout,const Date& d)
//{
//	_cout << d._year << "-" << d._month << "-" << d._day << endl;
//	return _cout;
//}

//class Time
//{
//	friend class Date;
//	// ����������Ϊʱ�������Ԫ�࣬�����������о�ֱ�ӷ���Time���е�˽�г�Ա����
//public:
//	Time(int hour = 0, int minute = 0, int second = 0)
//		: _hour(hour)
//		, _minute(minute)
//		, _second(second)
//	{}
//private:
//	int _hour;
//	int _minute;
//	int _second;
//};
//class Date
//{
//public:
//	Date(int year = 1900, int month = 1, int day = 1)
//		: _year(year)
//		, _month(month)
//		, _day(day)
//	{}
//	void SetTimeOfDate(int hour, int minute, int second)
//	{
//		// ֱ�ӷ���ʱ����˽�еĳ�Ա����
//		_t._hour = hour;
//		_t._minute = minute;
//		_t._second = second;
//	}
//
//private:
//	int _year;
//	int _month;
//	int _day;
//	Time _t;
//};

//class A
//{
//private:
//	static int k;
//	int h;
//public:
//	class B // B��������A����Ԫ
//	{
//	public:
//		void foo(const A& a)
//		{
//			cout << k << endl;//OK
//			cout << a.h << endl;//OK
//		}
//	};
//};
//int A::k = 1;
//int main()
//{
//	A::B b;
//	b.foo(A());
//
//	return 0;
//}
//int main()
//{
//	Date d1(2024,3,9);
//	cout << d1;
//	return 0;
//}

//class A
//{
//public:
//	A(int a = 0)
//		:_a(a)
//	{
//		cout << "A(int a)" << endl;
//	}
//	~A()
//	{
//		cout << "~A()" << endl;
//	}
//private:
//	int _a;
//};
//class Solution {
//public:
//	int Sum_Solution(int n) {
//		//...
//		return n;
//	}
//};
//int main()
//{
//	A aa1;
//	// ������ô���������Ϊ�������޷�ʶ��������һ���������������Ƕ�����
//	//A aa1();
//	// �������ǿ�����ô����������������������ص㲻��ȡ���֣�
//	// ����������������ֻ����һ�У����ǿ��Կ�����һ�����ͻ��Զ�������������
//	A();
//	A aa2(2);
//	// �������������������¾ͺܺ���
//	Solution().Sum_Solution(10);
//	return 0;
//}

class A
{
public:
	A(int a = 0)
		:_a(a)
	{
		cout << "A(int a)" << endl;
	}
	A(const A& aa)
		:_a(aa._a)
	{
		cout << "A(const A& aa)" << endl;
	} 
	A& operator=(const A& aa)
	{
		cout << "A& operator=(const A& aa)" << endl;
		if (this != &aa)
		{
			_a = aa._a;
		}
		return *this;
	}
	~A()
	{
		cout << "~A()" << endl;
	}
private:
	int _a;
};
void f1(A aa)
{}
A f2()
{
	A aa;
	return aa;
}
//int main()
//{
//	 ��ֵ����
//	A aa1;
//	f1(aa1);
//	cout << endl;
//	 ��ֵ����
//	f2();
//	cout << endl;
//	 ��ʽ���ͣ���������+��������->�Ż�Ϊֱ�ӹ���
//	f1(1);
//	 һ�����ʽ�У���������+��������->�Ż�Ϊһ������
//	f1(A(2));
//	cout << endl;
//	 һ�����ʽ�У�������������+��������->�Ż�һ����������
//	A aa2 = f2();
//	cout << endl;
//	 һ�����ʽ�У�������������+��ֵ����->�޷��Ż�
//	aa1 = f2();
//	cout << endl;
//	return 0;
//}

A f4()
{
	return A();
}
int main()
{
	//����+��������+��������->����
	A ret = f4();
	return 0;
}