#pragma once
#include<iostream>
using namespace std;

// 1�������Ͷ������
// 2��static,�������ԣ�ֻ�ڵ�ǰ�ļ��ɼ�
// 3��inline
//
//inline int Add(int a, int b)
//{
//	cout << "int Add(int a, int b)" << endl;
//	cout << "int Add(int a, int b)" << endl;
//	cout << "int Add(int a, int b)" << endl;
//	cout << "int Add(int a, int b)" << endl;
//	cout << "int Add(int a, int b)" << endl;
//	cout << "int Add(int a, int b)" << endl;
//	cout << "int Add(int a, int b)" << endl;
//	cout << "int Add(int a, int b)" << endl;
//	cout << "int Add(int a, int b)" << endl;
//	return a + b;
//}

class Stack
{
	//private:
public:
	// ��Ա����
	int* a;
	int top;
	int capacity;

public:
	// ��Ա����
	void Init(int n=4);
	void Push(int x);
};

//class Queue
//{
//public:
//	// ��Ա����
//	void Init(int n);
//	void Push(int x);
//};