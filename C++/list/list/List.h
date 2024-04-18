#pragma once
#include<iostream>
using namespace std;
namespace bit
{
	//ListNode节点构造----当想数据都公开时用struct
	template<class T>
	struct ListNode
	{
		ListNode<T>* _prve;
		ListNode<T>* _next;
		T _data;

		ListNode(const T& x= T())
			:_prve(nullptr)
			,_next(nullptr)
			,_data(x)
		{}

	};



	//迭代器
	template<class T,class Ref,class Ptr>
	struct Listiterator
	{
		typedef ListNode<T> Node;
		typedef Listiterator<T,Ref,Ptr> Self;

		Node* _node;
		Listiterator(Node* node)
			:_node(node)
		{}
		// * 
		Ref operator*()
		{
			return _node->_data;
		}
		// ->
		Ptr operator->()
		{
			return &_node->_data;
		}

		//++it
		Self& operator++()
		{
			_node = _node->_next;
			return *this;
		}
		//it++
		Self operator++(int)
		{
			Self tmp(*this);
			_node = _node->_next;
			return tmp;
		}

		//--it
		Self& operator--()
		{
			_node = _node->_prve;
			return *this;
		}
		//it--
		Self operator--(int)
		{
			Self tmp(*this);
			_node = _node->_prve;
			return tmp;
		}
		// !=
		bool operator!=(const Self& it)
		{
			return _node != it._node;
		}
		//==
		bool operator==(const Self& it)
		{
			return _node == it._node;
		}

	};
	
	//template<class T>
	//struct Listiterator
	//{
	//	typedef ListNode<T> Node;
	//	typedef Listiterator<T> Self;

	//	Node* _node;
	//	Listiterator(Node* node)
	//		:_node(node)
	//	{}
	//	// * 
	//	T& operator*()
	//	{
	//		return _node->_data;
	//	}
	//	// ->
	//	T* operator->()
	//	{
	//		return &_node->_data;
	//	}
	//	
	//	//++it
	//	Self& operator++()
	//	{
	//		_node = _node->_next;
	//		return *this;
	//	}
	//	//it++
	//	Self operator++(int)
	//	{
	//		Self tmp(*this);
	//		_node = _node->_next;
	//		return tmp;
	//	}
	//	
	//	//--it
	//	Self& operator--()
	//	{
	//		_node = _node->_prve;
	//		return *this;
	//	}
	//	//it--
	//	Self operator--(int)
	//	{
	//		Self tmp(*this);
	//		_node = _node->_prve;
	//		return tmp;
	//	}
	//	// !=
	//	bool operator!=(const Self& it)
	//	{
	//		return _node != it._node;
	//	}
	//	//==
	//	bool operator==(const Self& it)
	//	{
	//		return _node == it._node;
	//	}

	//};
	//template<class T>
	//struct ListConstiterator
	//{
	//	typedef ListNode<T> Node;
	//	typedef ListConstiterator<T> Self;

	//	Node* _node;
	//	ListConstiterator(Node* node)
	//		:_node(node)
	//	{}
	//	// * 
	//	const T& operator*()
	//	{
	//		return _node->_data;
	//	}
	//	// ->
	//	const T* operator->()
	//	{
	//		return &_node->_data;
	//	}

	//	//++it
	//	Self& operator++()
	//	{
	//		_node = _node->_next;
	//		return *this;
	//	}
	//	//it++
	//	Self operator++(int)
	//	{
	//		Self tmp(*this);
	//		_node = _node->_next;
	//		return tmp;
	//	}

	//	//--it
	//	Self& operator--()
	//	{
	//		_node = _node->_prve;
	//		return *this;
	//	}
	//	//it--
	//	Self operator--(int)
	//	{
	//		Self tmp(*this);
	//		_node = _node->_prve;
	//		return tmp;
	//	}
	//	// !=
	//	bool operator!=(const Self& it)
	//	{
	//		return _node != it._node;
	//	}
	//	//==
	//	bool operator==(const Self& it)
	//	{
	//		return _node == it._node;
	//	}
	//};


	//List构造
	template<class T>
	class List
	{
		typedef ListNode<T> Node;

	public:
		typedef Listiterator<T, T&, T*> iterator;
		typedef Listiterator<T, const T&, const T*> const_iterator;

		const_iterator begin() const
		{
			return _head->_next;
		}
		const_iterator end() const
		{
			return _head;
		}

		iterator begin()
		{
			return _head->_next;
		}
		iterator end()
		{
			return _head;
		}

		void empty_init()
		{
			_head = new Node;
			_head->_next = _head;
			_head->_prve = _head;

			_size = 0;
		}

		List()
		{
			empty_init();
		}
		List(const List<int>& lt)
		{
			empty_init();
			for (auto& e: lt)
			{
				push_back(lt);
			}
		}
		void clear()
		{
			iterator it = begin();
			while (it != end())
			{
				it = erase(it);
			}
		}
		~List()
		{
			clear();
			delete _head;
			_head = nullptr;
			_size = 0;
		}
		bool empty()
		{
			return _size == 0;
		}
		
		void insert(iterator pos, const T& val)
		{
			Node* cur = pos._node;
			Node* newnode = new Node(val);
			Node* prve = cur->_prve;
			//prve newnode cur
			prve->_next = newnode;
			newnode->_prve = prve;
			newnode->_next = cur;
			cur->_prve = newnode;
			_size++;
		}
		void push_back(const T& x)
		{
			insert(end(), x);
		}
		void push_front(const T& x)
		{
			insert(begin(), x);
		}
		iterator erase(iterator pos)
		{
			Node* cur = pos._node;
			Node* next = cur->_next;
			Node* prve = cur->_prve;
			//prve cur next
			prve->_next = next;
			next->_prve = prve;
			delete cur;
			_size--;

			return iterator(next);
		}
		void pop_back()
		{
			erase(--end());
		}
		void pop_front()
		{
			erase(begin());
		}

		//void push_back(const T& x)
		//{
		//	Node* newnode = new Node(x);
		//	Node* tail = _head->_prve;
		//	//_head  oldnode newnode
		//	tail->_next = newnode;
		//	newnode->_prve = tail;
		//	newnode->_next = _head;
		//	_head->_prve = newnode;
		//}


		

		size_t size()
		{
			return _size;
		}
	private:
		Node* _head;
		size_t _size;
	};

	//void Test1()
	//{
	//	List<int> lt;
	//	lt.push_back(1);		
	//	lt.push_back(2);
	//	lt.push_back(3);
	//	lt.push_back(4);
	//	lt.push_back(5);
	//	List<int>::iterator it = lt.begin();
	//	it = lt.begin();
	//while (it != lt.end())
	//{
	//	//*it += 50;
	//	cout << *it << ' ';
	//	++it;
	//}
	//while (it != lt.end())
	//{
	//	//*it += 50;
	//	cout << (it->_a) << ' ';
	//	++it;
	//}
	//cout << endl;
	//}
	struct A
	{
		int _a1;
		int _a2;
		
		A(int a1 = 0, int a2 = 0)
			:_a1(a1)
			,_a2(a2)
		{}
	};
	//void Test2()
	//{
	//	A a1 = { 1,2 };
	//	A a2(3, 4);

	//	List<A> lt;
	//	lt.push_back(a1);
	//	lt.push_back(a2);
	//	lt.push_back(A(5,6));
	//	lt.push_back({7,8});
	//	List<A>::iterator it = lt.begin();
	//	while (it != lt.end())
	//	{
	//		/*cout << (*it)._a1 << ':' << (*it)._a2 << endl;*/
	//		cout << it->_a1 << ':' << it->_a2 << endl;
	//		it++;
	//	}
	//	cout << endl;

	//}
	void PrintList(const List<int>& clt )
	{
		List<int>::const_iterator it = clt.begin();
		while (it != clt.end())
		{
			//*it += 50;
			cout << *it << ' ';
			it++;
			}
		cout << endl;
	}
	void Test3()
	{
		List<int> lt;
		lt.push_back(1);
		lt.push_back(2);
		lt.push_back(3);
		lt.push_back(4);
		lt.push_back(5);
		PrintList(lt);
		lt.push_front(10);
		lt.push_front(20);
		lt.push_front(30);	
		PrintList(lt);
		lt.erase(lt.begin());
		PrintList(lt);
		lt.pop_back();
		lt.pop_back();
		PrintList(lt);


		cout << endl;
	}
}