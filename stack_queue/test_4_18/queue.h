#pragma once
#include<deque>
#include<list>
namespace lin
{

	//template<class T, class Con = list<T>>
	template<class T,class Con= deque<T>>
	class queue
	{
	public:
		queue()
		{}

		void push(const T& x)
		{
			_con.push_back(x);
		}
		void pop()
		{
			_con.pop_front();
		}
		bool empty()
		{
			return _con.empty();
		}
		T& back()
		{
			return _con.back();
		}
		T& front()
		{
			return _con.front();
		}
		const T& back() const
		{
			return _con.back();
		}
		const T& front() const
		{
			return _con.front();
		}
		size_t size()
		{
			return _con.size();
		}

	private:
		Con _con;
	};
}
