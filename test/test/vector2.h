#pragma once
#include <assert.h>

namespace bit
{
	template<typename T>
	class vector
	{
	public:
		typedef T* iterator;
		typedef const T* const_iterator;
		////////////////////////////////////////////////////
		vector()
		{}
		~vector()
		{
			delete[] _start;
			_start = _finish=_endofstorage = nullptr;
		}
		////////////////////////////////////////////////////
		iterator begin()
		{
			return _start;
		}
		iterator end()
		{
			return _finish;
		}
		const_iterator begin() const
		{
			return _start;
		}
		const_iterator end() const
		{
			return _finish;
		}
		size_t capacity() const
		{
			return _endofstorage - _start;
		}
		size_t size() const
		{
			return _finish - _start;
		}
		////////////////////////////////////////////////////
		void reserve(size_t n)
		{
			if (n > capacity())
			{
				T* tmp = new T[n];
				size_t old_size = size();
				memcpy(tmp, _start, size() * sizeof(T));
				delete[] _start;
				_start = tmp;
				_finish = tmp + old_size;
				_endofstorage = tmp + n;
			}
		}
		void push_back(const T& val)
		{
			if (_finish == _endofstorage)
			{
				reserve(capacity() == 0 ? 4 : capacity() * 2);
			}
			*_finish = val;
			_finish++;
		}
		void erase(iterator pos)
		{
			assert(pos >= _start && pos < _finish);
			iterator it = pos + 1;
			while (it < _finish)
			{
				*(it - 1) = *it;
				++it;
			}
			--_finish;
		}
		void insert(iterator pos, const T& val)
		{
			if (_finish == _endofstorage)
			{
				size_t len = pos - _start;
				reserve(capacity() == 0 ? 4 : capacity() * 2);
				pos = _start + len;
			}
			iterator it = _finish-1;
			while (it >= pos)
			{
				*(it + 1) = *it;
				it--;
			}
			*pos = val;
			_finish++;
		}
		////////////////////////////////////////////
		const T& operator[](size_t pos) const
		{
			return _start[pos];
		}
		T& operator[](size_t pos)
		{
			return _start[pos];
		}
	private:
		iterator _start=nullptr;
		iterator _finish = nullptr;
		iterator _endofstorage = nullptr;
	};


	template<typename T>
	void vector_print(const vector<T>& v)
	{
		for (size_t i = 0; i < v.size(); i++)
		{
			cout << v[i] << ' ';
		}
		cout << endl;
		typename vector<T>::const_iterator it = v.begin();
		while (it != v.end())
		{
			cout << *it << ' ';
			it++;
		}
		cout << endl;
		for (auto it : v)
		{
			cout << it << ' ';
		}
		cout << endl;
	}
	void vector_test1()
	{
		vector<int> v1;
		v1.push_back(1);
		v1.push_back(2);
		v1.push_back(3);
		v1.push_back(4);
		vector_print(v1);
		//v1.erase(v1.begin());
		//vector_print(v1);
		v1.insert(v1.begin(), 10);
		v1.insert(v1.begin()+1, 20);
		v1.insert(v1.begin()+2, 30);
		vector_print(v1);

	}
}