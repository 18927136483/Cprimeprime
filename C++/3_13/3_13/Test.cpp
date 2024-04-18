#include<iostream>
using namespace std;
#include<string>

//void test()
//{
//	string a = "hello world";
//	string b = a;
//	if (a.c_str() == b.c_str())
//	{
//		cout << "true" << endl;
//	}
//	else cout << "false" << endl;
//	string c = b;
//	c = "";
//	if (a.c_str() == b.c_str())
//	{
//		cout << "true" << endl;
//	}
//	else cout << "false" << endl;
//	a = "";
//	if (a.c_str() == b.c_str())
//	{
//		cout << "true" << endl;
//	}
//	else cout << "false" << endl;
//}
//void test1()
//{
//	string str("Hello Bit.");
//	str.reserve(111);
//	str.resize(5);
//	str.reserve(50);
//	cout << str.size() << ":" << str.capacity() << endl;
//}
//void test2()
//{
//		string strText = "How are you?";
//		string strSeparator = " ";
//		string strResult;
//		int size_pos = 0;
//		int size_prev_pos = 0;
//		while ((size_pos = strText.find_first_of(strSeparator, size_pos)) != string::npos)
//		{
//			strResult = strText.substr(size_prev_pos, size_pos - size_prev_pos);
//			cout << strResult << " ";
//			size_prev_pos = ++size_pos;
//		}
//		if (size_prev_pos != strText.size())
//		{
//			strResult = strText.substr(size_prev_pos, size_pos - size_prev_pos);
//			cout << strResult << " ";
//		}
//		cout << endl;
//}
//int myAtoi(char* str) {
//	int sz = 0;
//	int flag = 1;
//	int carry = 0;
//	int len = strlen(str);
//	int ret = 0;
//	while (sz < len)
//	{
//		if (str[sz] >= '0' && str[sz] <= '9')
//		{
//			if (carry != 0)
//			{
//				ret *= 10;
//				carry = 0;
//			}
//			ret += str[sz] - '0';
//			carry++;
//
//			if (sz > 0 && str[sz - 1] == '-')
//			{
//				flag = -1;
//			}
//			if (sz < len - 1 && (str[sz + 1] < '0' || str[sz + 1]>'9'))
//			{
//				break;
//			}
//			sz++;
//		}
//	}
//	ret = ret * flag;
//	return ret;
//}
//int myAtoi(string str) {
//	int flag = 1;
//	int sz = 0;
//	long ret = 0;
//	int i = 0;
//	if (str[i] == ' ')
//		i++;
//	if (str[i] == '-')
//	{
//		flag = -1;
//	}
//	if (str[i] == '-' || str[i] == '+')
//		i++;
//	for (; i < str.size() && (str[i] >= '0' || str[i] <= '9'); i++)
//	{
//		ret = ret * 10 + (str[i] - '0');
//		if (ret >= INT_MAX && flag == 1)
//			return  INT_MAX;
//		if (ret > INT_MAX && flag == -1)
//			return  INT_MIN;
//	}
//	return ret * flag;
//}
//void reverseString(string s) {
//	int begin = 0;
//	int end = s.size() - 1;
//	while (begin != end)
//	{
//		swap(s[begin++], s[end--]);
//	}
//}

//int firstUniqChar(string s) {
//	int map[26] = { 0 };
//	char m;
//	for (int i = 0; i < s.size(); i++) {
//		map[s[i] - 'a']++;
//	}
//	for (int i = 0; i < s.size(); i++) {
//		if (map[s[i] - 'a'] == 1)return i;
//	}
//	return -1;
//}
#include<algorithm>
bool isPalindrome(string s) {
	string s1;
	s1.reserve(s.size());
	int j = 0;
	for (int i = 0; i < s.size(); i++)
	{
		if (s[i] >= 'A' && s[i] <= 'Z')
		{
			s[i] += 26;
			s1[j++] = s[i];
		}
		else if (s[i] >= 'a' && s[i]<='z')
		{
			s1[j++] = s[i];
		}
	}
	string s2(s1);
	reverse(s1.begin(), s1.end());
	int begin = 0;
	int end = s1.size() - 1;
	while (end >= 0 && begin <= s1.size() - 1)
	{
		if (s1[end--] != s2[begin--])
			return false;
	}
	return true;

};
class Solution {
public:
	bool isPalindrome(string s) {
		if (s.size() <= 1)
			return true;
		int left = 0;
		int right = s.size() - 1;
		while (left < right)
		{
			while (left < right && !isalnum(s[left]))
			{
				left++;
			}
			while (left < right && !isalnum(s[right]))
			{
				right--;
			}
			if (tolower(s[left]) != tolower(s[right]))
			{
				return false;
			}
			left++;
			right--;
		}
		return true;
	}

};
int main()
{
	//test1();
	//test2();
	//char str[] = { "h","e","l","l","o" };
	//cout << reverseString(str2) << endl;;
	string s("race a car");
	cout << isPalindrome(s) << endl;
	return 0;
}
