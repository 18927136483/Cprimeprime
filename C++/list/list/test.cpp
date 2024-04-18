#include<list>
#include"List.h"

void test()
{
	list<int> lt;
	lt.push_back(1);
	lt.push_back(1);
	lt.push_back(1);
	lt.push_back(1);
	list<int>::iterator it = lt.begin();
	while (it != lt.end())
	{
		cout << *it << endl;
		it++;
	}
	cout << endl;
}

int main()
{
	bit::Test3();
	return 0;
}