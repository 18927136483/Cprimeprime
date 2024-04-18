#include<iostream>
using namespace std;

#include<string>

void Test_string1()
{
	string s0;
	string s1("hello world");
	string s2(s1, 5, 10);
	string s3(s2);
	string s4(s1, 0);
	char ch[] = "##########";
	string s5(ch, 10);

	cout << s0 << endl;
	cout << s1 << endl;
	cout << s2 << endl;
	cout << s3 << endl;
	cout << s4 << endl;
	cout << s5 << endl;

}

void Test_string2()
{
	string s1("hello world");
	for (int i = 0; i < s1.size(); i++)
	{
		cout << s1[i] << " ";
	}
	cout << endl;
	string::iterator it3 = s1.begin();
	while (it3 != s1.end())
	{
		cout << *it3 << " ";
		it3++;
	}
	cout << endl;

}

int main()
{
	//Test_string1();
	Test_string2();

	return 0;
}