#include "Stack.h"


void Stack::Init(int n = 4)
{
	a = (int*)malloc(sizeof(int) * n);
	_capacity = n;
	_top = 0;
}
void Stack::Push(int x)
{
	a[_top++] = x;
}
void Info::Printf(int n = 4)
{

}