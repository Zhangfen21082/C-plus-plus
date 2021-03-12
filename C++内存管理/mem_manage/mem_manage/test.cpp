#include <iostream>
using namespace std;

//template<class T>

//class Stack
//{
//public:
//	Stack()
//		:_arr(new T[4])
//		,_top(0)
//		,_capacity(0)
//	{}
//	~Stack()
//	{
//		delete[] _arr;
//		_arr = nullptr;
//		_capacity=_top = 0;
//	}
//	void push(const T& arr);
//
//private:
//	T* _arr;
//	int _top;
//	int	_capacity;
//};

//int main()
//{
//	Stack<int> s1;
//	Stack<double> s2;
//
//}


template<class T>

class Stack
{
public:
	Stack()
		:_arr(new T[4])
		,_top(0)
		,_capacity(0)
	{}
	~Stack()
	{
		delete[] _arr;
		_arr = nullptr;
		_capacity = _top = 0;
	}
	void push(const T& arr);

private:
	T* _arr;
	int _top = 0;
	int _capacity = 0;
};
int main()
{
	Stack<int> s1;
	Stack<double> s1;

}

template<class T>
void Stack<T>::push(const T& arr)
{


}
