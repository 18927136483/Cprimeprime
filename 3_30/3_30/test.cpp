
#include<iostream>
#include<vector>
using namespace std;

int main()
{
	char i = '4';
	cout << i - '0' << endl;
	cout << i + '0' << endl;
	return 0;
}
//
//int main()
//{
//	int ar[] = { 1,2,3,4,0,5,6,7,8,9 };
//	int n = sizeof(ar) / sizeof(int);
//
//	vector<int> v(ar, ar + n);
//
//	vector<int>::iterator it = v.begin();
//
//	while (it != v.end())
//
//	{
//
//		if (*it != 0)
//
//			cout << *it;
//
//		else
//			v.erase(it);
//		it++;
//	}
//	return 0;
//
//}
//int main()
//{
//
//	vector<int> array;
//
//	array.push_back(100);
//
//	array.push_back(300);
//
//	array.push_back(300);
//
//	array.push_back(300);
//
//	array.push_back(300);
//
//	array.push_back(500);
//
//	vector<int>::iterator itor;
//
//	for (itor = array.begin(); itor != array.end(); itor++)
//	{
//
//		if (*itor == 300)
//		{
//
//			itor = array.erase(itor);
//
//		}
//	}
//	for (itor = array.begin(); itor != array.end(); itor++)
//	{
//		cout << *itor << " ";
//
//	}
//	return 0;
//}


//int main()
//{
//
//	int ar[] = { 1,2,3,4,5,6,7,8,9,10 };
//
//	int n = sizeof(ar) / sizeof(int);
//
//	vector<int> v(ar, ar + n);
//
//	cout << v.size() << ":" << v.capacity() << endl;
//
//	v.reserve(100);
//
//	v.resize(20);
//
//	cout << v.size() << ":" << v.capacity() << endl;
//
//	v.reserve(50);
//
//	v.resize(5);
//
//	cout << v.size() << ":" << v.capacity() << endl;
//
//}
