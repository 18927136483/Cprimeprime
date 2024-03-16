#pragma once
#include <assert.h>
#include <string.h>
using namespace std;
namespace bit
{
	class string
	{
	public:
		typedef char* iterator;
		typedef const char* const_iterator;
		const_iterator begin() const
		{
			return _str;
		}
		const_iterator end() const
		{
			return _str + _size;
		}
		iterator begin() 
		{
			return _str;
		}
		iterator end() 
		{
			return _str + _size;
		}
		//////////////////////////////////////////////////////////////
		string(const char* str = "")
			:_size(strlen(str))
		{
			_str = new char[_size + 1];
			_capacity = _size;
			strcpy(_str, str);
		}
		char* c_str() const
		{
			return _str;
		}
		~string()
		{
			delete[] _str;
			_str = nullptr;
			_size = _capacity = 0;
		}
		//////////////////////////////////////////////////////////////
		//modify
		void reserve(size_t n)
		{
			if (n > _capacity)
			{
				char* tmp = new char[n + 1];
				strcpy(tmp, _str);
				delete[] _str;
				_capacity = n;
				_str = tmp;
			}
		}
		void push_back(char ch)
		{
			//双倍扩容
			if (_capacity == _size)
			{
				reserve(_capacity == 0 ? 4:_capacity*2);
			}
			_str[_size] = ch;
			_size++;
			_str[_size] = '\0';

		}
		void append(const char* str)
		{
			//扩容
			int len = strlen(str);
			if (_size + len > _capacity)
			{
				reserve(_size + len);
			}
			strcpy(_str+_size, str);
			_size += len;
		}
		string& operator+=(char s)
		{
			push_back(s);
			return *this;
		}
		string& operator+=(const char* str)
		{
			append(str);
			return *this;
		}
		//深拷贝
		string& operator=(const string& s)
		{
			char* tmp = new char[s._capacity + 1];
			strcpy(tmp, s._str);
			_str = tmp;
			_size = s._size;
			_capacity = s._capacity;
			return *this;
		}
		void clear()
		{
			_size = 0;
			_str[_size] = '\0';
		}
		void swap(string& s)
		{
			/*char* tmp = new char[_size];
			tmp = s._str;
			s._str = _str;
			_str = tmp;
			int tmp_size = s._size;
			s._size = _size;
			_size = tmp_size;
			int tmp_capacity = s._capacity;
			s._capacity = _capacity;
			_capacity = tmp_capacity;*/
			std::swap(_str, s._str);
			std::swap(_size, s._size);
			std::swap(_capacity, s._capacity);
		}
		
		//////////////////////////////////////////////////////////////

		//insert
		void insert(size_t pos, char ch)
		{
			assert(pos <= _size);
			//扩容
			if (_capacity == _size)
			{
				reserve(_capacity == 0 ? 4 : _capacity * 2);
			}
			//可以把'\0'也拷贝过去
			size_t end = _size+1;
			while (end > pos)
			{
				_str[end] = _str[end - 1];
				end--;
			}
			_str[pos] = ch;
			_size++;
		}
		//void insert(size_t pos, const char* str)
		//{
		//	assert(pos <= _size);
		//	size_t len = strlen(str);
		//	if (_size + len > _capacity)
		//	{
		//		reserve(_size + len);
		//	}
		//	size_t end = _size + len;
		//	while (end > pos + len -1)
		//	{
		//		_str[end] = _str[end - len];
		//		end--;
		//	}
		//	strncpy(_str + pos, str,len);
		//	_size += len;
		//}
		void insert(size_t pos, const char* str)
		{
			assert(pos <= _size);
			size_t len = strlen(str);
			if (len+_size>_capacity)
			{
				reserve(len + _size);
			}
			size_t end = _size + len;
			while (end>pos+len-1)
			{
				_str[end] = _str[end - len];
				end--;
			}
			strncpy(_str + pos, str, len);
			_size += len;
		}
		/////////////////////////////////////////////////////////////

	//relational operators

		/*bool operator<(const string& s)
		{
			if (strcmp(s._str, _str) > 0)
				return true;
			else
				return false;
		}

		bool operator<=(const string& s)
		{
			if (strcmp(_str, s._str) > 0)
				return false;
			else
				return true;
		}

		bool operator>(const string& s)
		{
			if (strcmp(_str, s._str) > 0)
			{
				return true;
			}
			else
				return false;
		}

		bool operator>=(const string& s)
		{
			if (strcmp(_str, s._str) >= 0)
				return true;
			else
				return false;
		}

		bool operator==(const string& s)
		{
			if (strcmp(_str, s._str) == 0)
				return true;
			else
				return false;
		}

		bool operator!=(const string& s)
		{
			if (!(*this == s))
				return true;
			else
				return false;
		}*/
		//////////////////////////////////////////////////////////////////////////////
		
		// 返回c在string中第一次出现的位置

		size_t find(char c, size_t pos = 0) const
		{
			assert(pos < _size);

			for (size_t i = pos; i < _size; i++)
			{
				if (_str[i] == c)
					return i;
			}
			return npos;
		}
		size_t find(const char* str, size_t pos = 0) const
		{
			assert(pos < _size);
			char* p = strstr(_str + pos, str);
			if (p)
			{
				return p - _str;
			}
			else
				return npos;
		}
		// 删除pos位置上的元素，并返回该元素的下一个位置

		string& erase(size_t pos, size_t len)
		{
			assert(pos < _size);

			if (len == npos || len > _size - pos)
			{
				_str[pos] = '\0';
				_size = pos;
			}
			else
			{
				strcpy(_str + pos, _str + pos + len);
				_size -= len;
			}
			return *this;
		}
		//////////////////////////////////////////////
		size_t size()
		{
			return _size;
		}
		void resize(size_t n,char ch='\0')
		{
			if (n <= _size)
			{
				_str[n] = '\0';
				_size = n;
			}
			else
			{
				reserve(n);
				for (size_t i = _size; i < n; i++)
				{
					_str[i] = ch;
				}
				_str[n] = '\0';
				_size = n;
			}
		}
		size_t capacity()
		{
			return _capacity;
		}
	private:
		char* _str=nullptr;
		size_t _size=0;
		size_t _capacity=0;
	public:
		static const int npos;
	};
	const int string::npos = -1;
	void swap(string& x, string& y)
	{
		x.swap(y);
	}
	/////////////////////////////////////////////////////////////

//relational operators 全局
	bool operator==(const string& s1,const string& s2)
	{
		int ret = strcmp(s1.c_str(), s2.c_str());
		return ret == 0;
	}
	bool operator!=(const string& s1, const string& s2)
	{
		return !(s1 == s2);
	}
	bool operator>(const string& s1, const string& s2)
	{
		int ret = strcmp(s1.c_str(), s2.c_str());
		return ret > 1;
	}
	bool operator>=(const string& s1, const string& s2)
	{
		//int ret = strcmp(s1.c_str(), s2.c_str());
		//return ret >= 1;
		return (s1 > s2)||(s1==s2);
	}
	bool operator<(const string& s1, const string& s2)
	{
		return !(s1 >= s2);
	}
	bool operator<=(const string& s1, const string& s2)
	{
		return !(s1 > s2);
	}
	/////////////////////////////////////////////////////////////
	// 流提取<<	和	流插入>>
	ostream& operator<<(ostream& out, const string& s)
	{
		for (auto ch : s)
		{
			out << ch;
		}
		return out;
	}
	istream& operator>>(istream& in, string& s)
	{
		char ch;
		ch = in.get();
		while (ch != ' ' && ch != '\n')
		{
			s += ch;
			ch = in.get();
		}
		return in;
	}
	istream& getline(istream& in, string& s)
	{
		s.clear();
		char ch;
		ch = in.get();
		char buff[128];
		size_t i = 0;
		while (ch != ' ' && ch != '\n')
		{
			buff[i++] = ch;
			if (i == 127)
			{
				buff[128] = '\0';
				s += buff;
				i = 0;
			}
			ch = in.get();
		}
		if (i > 0)
		{
			buff[i] = '\0';
			s += buff;
		}
		return in;
	}
	void TestString1()
	{
		string s1("hello world");
		cout << s1.c_str() << endl;
		/*string::iterator it1 = s1.begin();
		while (it1 != s1.end())
		{
			(*it1)++;
			cout << *it1 << ' ';
			it1++;
		}
		cout << endl;*/
		const string s2("xxxxxx");
		string::const_iterator it2 = s2.begin();
		while (it2 != s2.end())
		{
			cout << *it2 << ' ';
			it2++;
		}
		cout << endl;
		for (auto ch : s2)
		{
			cout << ch << ' ';
		}
		cout << endl;
	}
	void TestString2()
	{
		string s1("hello world");
		cout << s1.c_str() << endl;
		//s1.push_back('x');
		//cout << s1.c_str() << endl;

		//s1.append("linxu");
		//cout << s1.c_str() << endl;

		//s1 += 'l';
		//cout << s1.c_str() << endl;
		//s1 += "nnnnnnn";
		//cout << s1.c_str() << endl;
		/*string s2("hello linxu");
		s1 = s2;
		cout << s1.c_str() << endl;*/
	}
	void TestString3()
	{
		string s1("hello world");
		cout << s1.c_str() << endl;
		//s1.insert(5, 'b');
		//cout << s1.c_str() << endl;
		//s1.insert(5, "xxxxxxxx");
		//cout << s1.c_str() << endl;
		string s2("hello linxu");
		cout << s2.c_str() << endl;

		swap(s1, s2);
		cout << s1.c_str() << endl;
		cout << s1.c_str() << endl;
		cout << (s1 < s2) << endl;
		cout << (s1 <= s2) << endl;

		cout << (s1 > s2) << endl;
		cout << (s1 >= s2) << endl;

		cout << (s1 == s2) << endl;
		cout << (s1 != s2) << endl;
		
	}
	void TestString4()
	{
		string s1("hello world");
		cout << s1.c_str() << endl;

		/*s1.erase(5, 1);
		cout << s1.c_str() << endl;
		s1.erase(5, 10);
		cout << s1.c_str() << endl;
		s1.erase(5, 10000);
		cout << s1.c_str() << endl;*/
		//size_t sz = s1.find('l');
		//if (sz != string::npos)
		//	cout << sz << endl;

		/*string s2("xxxxx");
		cout << s2.c_str() << endl;
		swap(s1,s2);
		cout << s1.c_str() << endl;
		cout << s2.c_str() << endl;*/
		/*int sz=s1.find('l');
		cout << sz << endl;
		sz = s1.find("world");
		cout << sz << endl;*/


	}
	void TestString5()
	{
		string s1("hello world");
		cout << s1.c_str() << endl;
		//s1.insert(5, "xxxxx");
		//cout << s1.c_str() << endl;
		//s1.resize(10);
		//cout << s1 << endl;
		//s1.resize(15,'x');
		string s2;
		//cin >> s1>>s2;
		//cout << s1 << endl;
		//cout << s2 << endl;
		getline(cin,s2);
		cout << s2.capacity() << endl;
	}
}