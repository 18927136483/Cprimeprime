#pragma once
#include<iostream>
using namespace std;

// 1、声明和定义分离
// 2、static,链接属性，只在当前文件可见
// 3、inline
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
	// 成员变量
	int* a;
	int top;
	int capacity;

public:
	// 成员函数
	void Init(int n=4);
	void Push(int x);
};

//class Queue
//{
//public:
//	// 成员函数
//	void Init(int n);
//	void Push(int x);
//};