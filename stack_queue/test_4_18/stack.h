#pragma once
#include<vector>
#include<deque>
#include<list>
namespace lin
{
	//template<class T,class Con = list<T> >
	//template<class T, class Con =  vector<T> >
	template<class T, class Con = deque<T> >
	class stack
	{
	public:
		stack()
		{}
		void push(const T& x)
		{
			_con.push_back(x);
		}
		bool empty()
		{
			return _con.empty();
		}
		T& top()
		{
			return _con.back();
		}
		const T& top() const
		{
			return _con.back();
		}
		void pop()
		{
			_con.pop_back();
		}
		size_t size()
		{
			return _con.size();
		}

	private:
		Con _con;
	};
}