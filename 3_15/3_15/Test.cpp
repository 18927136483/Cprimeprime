#include<iostream>
using namespace std;
#include<string>

//string my_reverse(string s, int left, int right)
//{
//    while (left < right)
//    {
//        char tmp = s[left];
//        s[left] = s[right];
//        s[right] = tmp;
//        left++;
//        right--;
//    }
//    return s;
//}
//string reverseStr(string s, int k) {
//    int size = 0;
//    int begin = 0;
//    int end = 0;
//    while (end < s.size())
//    {
//        size++;
//        if (size == 2 * k)
//        {
//            s=my_reverse(s, begin, begin + k - 1);
//            begin = end+1;
//            size = 0;
//        }
//        end++;
//    }
//    if (size < k)
//    {
//        my_reverse(s, begin, end - 1);
//    }
//    if (size < 2 * k && size >= k)
//    {
//        s=my_reverse(s, begin, begin + k - 1);
//    }
//    return s;
//}
//string my_reverse(string s, int left, int right)
//{
//    while (left < right)
//    {
//        char tmp = s[left];
//        s[left] = s[right];
//        s[right] = tmp;
//        left++;
//        right--;
//    }
//    return s;
//}
//string reverseStr(string s, int k) {
//    int size = 0;
//    int begin = 0;
//    int end = 0;
//    int count = 0;
//    while (end < s.size())
//    {
//        count++;
//        if (count == 2 * k)
//        {
//            s = my_reverse(s, begin, begin + k-1);
//            begin = size;
//            count = 0;
//        }
//        end++;
//        size++;
//    }
//    if (count < 2 * k && count >= k)
//    {
//        s = my_reverse(s, begin+size-1, begin + size+k-1);
//    }
//    else if (count < k)
//    {
//        s = my_reverse(s, begin, begin + end - 1);
//    }
//    return s;
//}
string multiply(string num1, string num2) {
    long sum = 0;
    int sz1 = num1.size() - 1;
    for (int i = 0; i < num1.size(); i++)
    {
        int sz2 = num2.size() - 1;
        for (int j = 0; j < num2.size(); j++)
        {
            sum += ((num1[i] - '0') * pow(10 ,sz1)) * ((num2[j] - '0') * pow(10 ,sz2));
            if (sz2 != 0)
                sz2--;
        }
        if (sz1 != 0)
            sz1--;
    }
    string s2 = to_string(sum);
    return s2;

}
int main()
{
    string str("abcdefg");
    cout << multiply("2", "3") << endl;
	return 0;
}