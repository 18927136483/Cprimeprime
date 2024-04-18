#include<iostream>
using namespace std;


int main()
{
	int i = 0;
	int num = 0;
	for (i = 0; i <= 2022; i++)
	{
		int j = 0;
		for (j = 0; j <= 2022; j++)
		{
			if (i + j == 2022)
			{
				num++;
			}
		}
	}
	cout << num<<endl;
	return 0;
}