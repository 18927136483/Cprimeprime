#include <stdio.h>

//�ݹ�ͷǵݹ�ֱ�ʵ�����n��쳲�������

//�ݹ�
//int Fib(int n)
//{
//	if (n <= 2)
//	{
//		return 1;
//	}
//	else
//		return Fib(n - 1) + Fib(n - 2);
//}

////�ǵݹ�
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


//��дһ������ʵ��n��k�η���ʹ�õݹ�ʵ�֡�

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


//дһ���ݹ麯��DigitSum(n)������һ���Ǹ����������������������֮��

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


//��дһ������ reverse_string(char * string)���ݹ�ʵ�֣�
//ʵ�֣��������ַ����е��ַ��������У����������ӡ��
//Ҫ�󣺲���ʹ��C�������е��ַ�����������

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



//�ݹ�ͷǵݹ�ֱ�ʵ��strlen

////�ݹ�
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
////�ǵݹ�
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


//�ݹ�ͷǵݹ�ֱ�ʵ����n�Ľ׳ˣ����������������

//�ݹ�
//int Fac(int n)
//{
//	if (n == 1)
//		return 1;
//	else
//		return n * Fac(n - 1);
//}

//�ǵݹ�
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


//�ݹ鷽ʽʵ�ִ�ӡһ��������ÿһλ

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


//��дһ������ reverse_string(char * string)���ݹ�ʵ�֣�
//ʵ�֣��������ַ����е��ַ��������У����������ӡ��
//Ҫ�󣺲���ʹ��C�������е��ַ�����������

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