#include <iostream>
using namespace std;

//class Date {
//public:
//    Date(int year, int month, int day)
//    {
//        _year = year;
//        _month = month;
//        _day = day;
//    }
//    int GetMonthDay(int year, int month) {
//        static int monthdays[13] = { 0, 31, 28, 31, 30, 31, 30, 31, 31, 30, 31, 30, 31 };
//        if (month == 2 && (year % 4 == 0 && year % 100 != 0) || (year % 400 == 0)) {
//            return 29;
//        }
//        return monthdays[month];
//    }
//
//    bool operator<(const Date& d)
//    {
//        if (_year < d._year)
//        {
//            return true;
//        }
//        else if (_year == d._year)
//        {
//            if (_month < d._month)
//            {
//                return true;
//            }
//            else if (_month == d._month)
//            {
//                if (_day < d._day)
//                    return true;
//            }
//        }
//        return false;
//    }
//
//    bool operator!=(const Date& d)
//    {
//        return (_year != d._year) && (_month != d._month) && (_day != d._day);
//    }
//    Date operator++(int)
//    {
//        _day += 1;
//        if (_day > GetMonthDay(_year, _month))
//        {
//            _month++;
//            _day = 1;
//            if (_month == 13)
//            {
//                _year++;
//                _month = 1;
//            }
//        }
//        return *this;
//    }
//    int operator-(const Date& d)
//    {
//        Date max = *this;
//        Date min = d;
//        if (max < min)
//        {
//            max = d;
//            min = *this;
//        }
//        int n = 0;
//        while (max != min)
//        {
//            n++;
//            min++;
//        }
//        return n;
//    }
//private:
//    int _year;
//    int _month;
//    int _day;
//
//};
//
//int main() {
//    int date1 = 0;
//    int date2 = 0;
//    cin >> date1;
//    cin >> date2;
//    int year1 = date1 / 10000, month1 = (date1 / 100) % 100, day1 = date1 % 100;
//    int year2 = date2 / 10000, month2 = (date2 / 100) % 100, day2 = date2 % 100;
//    Date d1(year1, month1, day1);
//    Date d2(year2, month2, day2);
//    cout << d1 - d2 << endl;
//
//}


//class Date
//{
//public:
//	Date(int year = 1900, int month = 1, int day = 1)
//	{
//		_year = year;
//		_month = month;
//		_day = day;
//	}
//	// Date(const Date& d)   // 正确写法
//	Date(Date d) // 错误写法：编译报错，会引发无穷递归
//	{
//		_year = d._year;
//		_month = d._month;
//		_day = d._day;
//	}
//private:
//	int _year;
//	int _month;
//	int _day;
//};
//int main()
//{
//	Date d1;
//	Date d2(d1);
//	return 0;
//}

//typedef int DataType;
//class Stack
//{
//public:
//	Stack(size_t capacity = 10)
//	{
//		_array = (DataType*)malloc(capacity * sizeof(DataType));
//		if (nullptr == _array)
//		{
//			perror("malloc申请空间失败");
//			return;
//		}
//		_size = 0;
//		_capacity = capacity;
//	}
//	void Push(const DataType& data)
//	{
//		// CheckCapacity();
//		_array[_size] = data;
//		_size++;
//	}
//	~Stack()
//	{
//		if (_array)
//		{
//			free(_array);
//			_array = nullptr;
//			_capacity = 0;
//			_size = 0;
//		}
//	}
//private:
//	DataType* _array;
//	size_t _size;
//	size_t _capacity;
//};
//int main()
//{
//	Stack s1;
//	s1.Push(1);
//	s1.Push(2);
//	s1.Push(3);
//	s1.Push(4);
//
//
//	Stack s2(s1);
//	return 0;
//}


//class Date
//{
//public:
//	Date(int year, int month, int day)
//	{
//		cout << "date(int,int,int):" << this << endl;
//	}
//	Date(const Date& d)
//	{
//		cout << "Date(const Date& d):" << this << endl;
//	}
//	~Date()
//	{
//		cout << "~Date():" << this << endl;
//	}
//private:
//	int _year;
//	int _month;
//	int _day;
//};
//
//Date Test(Date d)
//{
//	Date temp(d);
//	return temp;
//}
//
//int main()
//{
//	Date d1(2022, 1, 13);
//	Test(d1);
//	return 0;
//}


//class Date
//{
//public:
//	Date(int year = 1900, int month = 1, int day = 1)
//	{
//		_year = year;
//		_month = month;
//		_day = day;
//
//	}
//	
//	int _year;
//	int _month;
//	int _day;
//};
//// 赋值运算符重载成全局函数，注意重载成全局函数时没有this指针了，需要给两个参数
//Date& operator=(Date& left, const Date& right)
//{
//	if (&left != &right)
//	{
//		left._year = right._year;
//		left._month = right._month;
//		left._day = right._day;
//	}
//	return left;
//}
//int main()
//{
//	Date d;
//
//	return 0;
//}


