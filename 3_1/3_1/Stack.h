#pragma once
#include <iostream>
using namespace std;

class Stack
{
private:
	int* a;
	int _top;
	int _capacity;
public:
	void Init(int n);
	void Push(int x);
};
class Info
{
	void Printf(int n);
};
