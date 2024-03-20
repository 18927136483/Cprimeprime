#pragma once
#include <assert.h>
namespace lin
{
	template<class T>
	class vector
	{
	public:
		typedef T* iterator;
		typedef const T* const_iterator;
		vector()
		{}

		~vector()
		{
			delete[] _start;
			_start = _finish = _endofstorage = nullptr;
		}
		/////////////////////////////////////////////////////////////
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
		//////////////////////////////////////////////////////////////////
		//capacity
		size_t size() const
		{
			return _finish - _start;
		}
		size_t capacity() const
		{
			return _endofstorage - _start;
		}
		void resize(size_t n, const T& value = T())
		{
			if (n > size())
			{
				reserve(n);
				//≤Â»Î
				while (_finish < _start+n)
				{
					*_finish = value;
					_finish++;
				}
			}
			else
			{
				_finish = _start + n;
			}
		}
		
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
		////////////////////////modify//////////////////////////////
		void push_back(const T& val)
		{
			/*if (_finish == _endofstorage)
			{
				reserve(capacity() == 0 ? 4 : capacity() * 2);
			}
			*_finish = val;
			_finish++;*/
			insert(end(), val);
		}

		void erase(iterator pos)
		{
			assert(pos >= _start);
			assert(pos < _finish);
			iterator it = pos + 1;
			while (it < _finish)
			{
				*(it - 1) = *it;
				it++;
			}
			_finish--;
		}
		void insert(iterator pos, const T& val)
		{
			assert(pos >= _start && pos <= _finish);
			if (_finish == _endofstorage)
			{
				size_t len = pos - _start;
				reserve(capacity() == 0 ? 4 : capacity()*2);
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

		///////////////////////////////////////////////////////////

		const T& operator[](size_t pos) const
		{
			return _start[pos];
		}

	private:
		iterator _start=nullptr;
		iterator _finish=nullptr;
		iterator _endofstorage=nullptr;
	};
	template<class T>
	void print_vector(const vector<T>& v)
	{
		/*for (size_t i = 0; i < v.size(); i++)
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
		cout << endl;*/
		for (auto t : v)
		{
			cout << t << ' ';
		}
		cout << endl;
	}
	void testvector1()
	{
		vector<int> v1;
		v1.push_back(1);
		v1.push_back(2);
		v1.push_back(3);
		v1.push_back(4);
		//v1.push_back(5);
		print_vector(v1);
		//v1.resize(10);
		//print_vector(v1);
		//v1.resize(2);
		//print_vector(v1);
		//v1.erase(v1.begin());
		//print_vector(v1);
		//v1.erase(v1.begin()+2);
		//print_vector(v1);

		v1.insert(v1.begin() + 1, 20);
		v1.insert(v1.end(), 40);
		print_vector(v1);

	}
}