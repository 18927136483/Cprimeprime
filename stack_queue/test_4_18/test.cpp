#include<iostream>
using namespace std;
#include<stack>
#include<queue>
//int main()
//
//{
//
//    queue<char> S;
//
//    char x, y;
//
//    x = 'n'; y = 'g';
//
//    S.push(x); S.push('i'); S.push(y);
//
//    S.pop(); S.push('r'); S.push('t'); S.push(x);
//
//    S.pop(); S.push('s');
//
//    while (!S.empty())
//
//    {
//
//        x = S.front();
//
//        S.pop();
//
//        cout << x;
//
//    };
//
//    cout << y;
//
//}

#include"stack.h"
#include"queue.h"

int main()
{
	lin::queue<int> q;
	q.push(1);
	q.push(2);
	q.push(30);
	q.push(4);
	cout << "queue: ";
	while (!q.empty())
	{
		cout << q.front() << ' ';
		q.pop();
	}
	cout << endl;
	lin::stack<int> s;
	s.push(10);
	s.push(20);
	s.push(30);
	s.push(40);
	cout << "stack: ";
	while (!s.empty())
	{
		cout << s.top() << ' ';
		s.pop();
	}
	cout << endl;

	return 0;
}
