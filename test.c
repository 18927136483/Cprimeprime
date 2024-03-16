#include <stdio.h>

//递归和非递归分别实现求第n个斐波那契数

//递归
//int Fib(int n)
//{
//	if (n <= 2)
//	{
//		return 1;
//	}
//	else
//		return Fib(n - 1) + Fib(n - 2);
//}

////非递归
//int Fib(int n)
//{
//	int a = 1;
//	int b = 1;
//	int c = 1;
//	while (n >= 3)
//	{
//		c = a + b;
//		a = b;
//		b = c;
//		n--;
//	}
//	return c;
//}
//
//int main()
//{
//	int n = 0;
//	scanf_s("%d", &n);
//	int ret = Fib(n);
//	printf("%d\n", ret);
//	return 0;
//}


//编写一个函数实现n的k次方，使用递归实现。

//int my_power(int n, int k)
//{
//	if (k == 1)
//		return n;
//	else
//		return n * my_power(n , k-1 );
//}
//int main()
//{
//	int n = 0;
//	int k = 0;
//	scanf_s("%d %d", &n,&k);
//	int ret = my_power(n, k);
//	printf("%d\n", ret);
//	return 0;
//}


//写一个递归函数DigitSum(n)，输入一个非负整数，返回组成它的数字之和

//int DigitSum(int n)
//{
//	if (n < 10)
//	{
//		return n;
//	}
//	else
//		return (n % 10 + DigitSum(n / 10));
//}
//
//int main()
//{
//	int n = 0;
//	scanf_s("%d", &n);
//	int ret = DigitSum(n);
//	printf("%d\n", ret);
//	return 0;
//}


//编写一个函数 reverse_string(char * string)（递归实现）
//实现：将参数字符串中的字符反向排列，不是逆序打印。
//要求：不能使用C函数库中的字符串操作函数

#include <string.h>

//void reverse_string(char* string)
//{
//	int len = strlen(string);
//	char tmp = *string;
//	*string = *(string + len - 1);
//
//	*(string + len - 1) = '\0';
//	if (strlen(string+1) >= 2)
//	{
//		reverse_string(string+1);
//	}
//	*(string + len - 1) = tmp;
//
//}
//
//int main()
//{
//	char arr[] = "abcdef";
//	printf("%s\n", arr);
//	reverse_string(arr);
//	printf("%s\n", arr);
//	return 0;
//}

//void reverse_string(char* string)
//{
//	int len = strlen(string);
//	char tmp = *string;
//	*string = *(string + len - 1);
//
//	*(string + len - 1) = '\0';
//	if (strlen(string + 1) >= 2)
//	{
//		reverse_string(string+1);
//	}
//	*(string + len - 1) = tmp;
//}
//
//
//int main()
//{
//	char arr[] = "abcdef";
//	printf("%s\n", arr);
//	reverse_string(arr);
//	printf("%s\n", arr);
//	return 0;
//}



//递归和非递归分别实现strlen

////递归
////int my_strlen(char* ch)
////{
////	if (*ch == '\0')
////	{
////		return 0;
////	}
////	else	
////		return 1 + my_strlen(ch + 1);
////
////}
//
////非递归
//
//int my_strlen(char* ch)
//{
//	int count = 0;
//	while (*ch != '\0')
//	{
//		ch++;
//		count++;
//	}
//	return count;
//}
//
//int main()
//{
//	char arr[] = "abcdef";
//	int ret=my_strlen(arr);
//	printf("%d\n", ret);
//	return 0;
//}


//递归和非递归分别实现求n的阶乘（不考虑溢出的问题

//递归
//int Fac(int n)
//{
//	if (n == 1)
//		return 1;
//	else
//		return n * Fac(n - 1);
//}

//非递归
//int Fac(int n)
//{
//	int i = 1;
//	int tmp = 1;
//	for (i = 1; i <= n; i++)
//	{
//		tmp = tmp * i;
//	}
//	return tmp;
//}
//
//int main()
//{
//	int n = 0;
//	scanf_s("%d", &n);
//	int ret = Fac(n);
//	printf("%d\n", ret);
//	return 0;
//}


//递归方式实现打印一个整数的每一位

//void print(int n)
//{
//	if (n > 9)
//		print(n / 10);
//	printf("%d ", n % 10);
//}
//
//int main()
//{
//	int n = 0;
//	scanf_s("%d", &n);
//	print(n);
//	return 0;
//}


//编写一个函数 reverse_string(char * string)（递归实现）
//实现：将参数字符串中的字符反向排列，不是逆序打印。
//要求：不能使用C函数库中的字符串操作函数

//void reverse_string(char* string)
//{
//	int len = strlen(string);
//	char tmp = *string;
//	*string = *(string + len - 1);
//
//	*(string + len - 1) = '\0';
//	if (strlen(string + 1) >= 2)
//	{
//		reverse_string(string + 1);
//	}
//	*(string + len - 1) = tmp;
//
//}
//
//int main()
//{
//	char arr[] = "abcdef";
//	reverse_string(arr);
//	printf("%s\n", arr);
//	return 0;
//}