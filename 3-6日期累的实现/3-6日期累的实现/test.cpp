#include "Date.h"
void test1()
{
	Date d1(2024, 3, 6);
	Date d2(2024, 2, 3);
	Date d3(2024, 3, 6);
	Date d4(2024, 4, 6);
	Date d5(2024, 3, 6);
	Date d6(2024, 3, 6);

	cout << (d1 > d2) << endl;
	cout << (d1 == d3) << endl;
	cout << (d1 < d4) << endl;
	cout << (d1 == d5) << endl;
	cout << (d1 >= d5) << endl;
	cout << (d1 != d6) << endl;
}
void test2()
{
	Date d1(2024, 3, 6);
	Date d2(d1);
	/*d2.operator+=(30);
	d2.Print();
	d1.Print();
	Date d3=d2.operator+(10);
	d2.Print();
	d3.Print();*/

	d2.operator+=(100000);
	d2.Print();
}
void test3()
{
	Date d1(2024, 3, 6);
	Date d2(d1);
	d2.operator-=(30);
	d2.Print();
	d1.Print();
	Date d3 = d2.operator-(10);
	d2.Print();
	d3.Print();
}
void test4()
{
	/*Date d1(2024, 3, 6);
	Date d2 = d1.operator++();
	d1.Print();
	d2.Print();

	Date d3 = d1.operator++(0);
	d1.Print();
	d3.Print();*/
	/*Date d1(2024, 3, 6);
	Date d2 = d1.operator--();
	d1.Print();
	d2.Print();

	Date d3 = d1.operator--(0);
	d1.Print();
	d3.Print();*/

	/*Date d1(2024, 3, 6);
	Date d2(2020, 3, 6);
	cout << (d1 - d2) << endl;*/

}
int main()
{
	//test1();
	test2();
	//test3();
	//test4();

	return 0;
}