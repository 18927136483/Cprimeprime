#include<iostream>
using namespace std;
#include<string>


//void Teststring()
//{
//	string s1;					//����յ�string�����s1
//	string s2("hello world");	//��C��ʽ�ַ�������string�����s2
//	string s3(s2);				//��������s3
 	//string s("hello world");
	//cout << s << endl;
	//cout << s.size() << endl;
	//cout << s.length() << endl;
	//cout << s.capacity() << endl;
//}

void Teststring()
{
	//string s("hello world");
	//cout << s << endl;
	//s.clear();
	//cout << s.size() << endl;
	//cout << s.capacity() << endl;

	//string s;
	//s.resize(10, 'a');
	//cout << s.size() << endl;
	//cout << s.capacity() << endl;
	//cout << s << endl;

	//string s("hello world");
	//s.resize(15);
	//cout << s << endl;
	//cout << s.size() << endl;
	//cout << s.capacity() << endl;

	//string s("hello world");
	//s.resize(5);
	//cout << s << endl;
	//cout << s.size() << endl;
	//cout << s.capacity() << endl;



}
void Teststring2()
{
	string s;
	// ����reserve�Ƿ��ı�string����ЧԪ�ظ���
	s.reserve(100);
	cout << s.size() << endl;
	cout << s.capacity() << endl;
	//���������

	// ����reserve����С��string�ĵײ�ռ��Сʱ���Ƿ�Ὣ�ռ���С
	s.reserve(50);
	cout << s.size() << endl;
	cout << s.capacity() << endl;
	//���������
}
void Teststring3()
{
	//string s("hello world");
	//for (int i = 0; i < s.size(); i++)
	//{
	//	cout << s[i] << ' ';
	//}
	//cout << endl;

	//string s("hello world");
	//string::iterator it = s.begin();
	//while (it != s.end())
	//{
	//	cout << *it << ' ';
	//	it++;
	//}
	//cout << endl;
	//it = s.begin();
	//while (it != s.end())
	//{
	//	(*it)++;
	//	cout << *it << ' ';
	//	it++;
	//}
	//cout << endl;
	
	/*string s("hello world");
	string::const_reverse_iterator rit = s.rbegin();
	while (rit != s.rend())
	{

		(*rit)++;
		cout << *rit << " ";
		++rit;
	}
	cout << endl;*/

	//string s("hello world");
	//for (auto ch : s)
	//{
	//	cout << ch << ' ';

	//}
	cout << endl;

}
void Teststring4()
{
	//string str;
	//str.push_back(' ');   // ��str�����ո�
	//str.append("hello");  // ��str��׷��һ���ַ���"hello"
	//str += 'w';           // ��str��׷��һ���ַ�'w'   
	//str += "orld";          // ��str��׷��һ���ַ���"orld"
	//cout << str << endl;
	//cout << str.c_str() << endl;   // ��C���Եķ�ʽ��ӡ�ַ���


	//string url("http://www.cplusplus.com/reference/string/string/find/");
	//cout << url << endl;
	//size_t start = url.find("://");
	//if (start == string::npos)
	//{
	//	cout << "invalid url" << endl;
	//	return;
	//}
	//start += 3;
	//size_t finish = url.find('/', start);
	//string address = url.substr(start, finish - start);
	//cout << address << endl;

	//��ȡfile�ĺ�׺
	//string file("string.hello.cpp");
	//cout << file << endl;
	//size_t pos = file.rfind('.');
	//string suffix(file.substr(pos));
	//cout << suffix << endl;


	//std::string firstlevel("com");
	//std::string secondlevel("cplusplus");
	//std::string scheme("http://");
	//std::string hostname;
	//std::string url;

	//hostname = "www." + secondlevel + '.' + firstlevel;
	//url = scheme + hostname;

	//std::cout << url << '\n';

	//�������Ҫ��ȡ�ַ��������һ�����ʳ���
	string line;
	//��Ҫʹ��cin>>line,��Ϊ�������ո񽫽�����
	//while(cin>>line)
	while (getline(cin, line))
	{
		size_t pos = line.rfind(' ');
		cout << line.size() - pos - 1 << endl;
	}

}
int main()
{

	//Teststring4();

	int i = 1234;
	double d = 3.14;
	string s1 = to_string(i);
	string s2 = to_string(d);

	string s3("8.88");
	double d2 = stod(s3);

	return 0;
}