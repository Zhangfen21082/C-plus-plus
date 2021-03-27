#pragma once
#define _CRT_SECURE_NO_WARNINGS 1
#include <iostream>
#include <assert.h>
#include <string.h>
using namespace std;

class Mystring
{

//友元函数，输入输出
friend ostream& operator<<(ostream& out, const Mystring& s);
friend istream& operator>>(istream& in, Mystring& s);

public:
	typedef char* iterator;


	Mystring(const char* str="");//构造函数
	~Mystring();//析构函数
	Mystring(const Mystring& s);//拷贝构造
	Mystring& operator=(Mystring s);//重载=


	iterator begin()//迭代器
	{
		return _str;
	}
	iterator end()//迭代器
	{
		return _str + _size;
	}


	//修改操作
	void push_back(char ch);//追加一个字符
	void append(const char* str);//追加一个字符串
	Mystring& operator+=(char ch);//重载+=
	Mystring& operator+=(const char* str);//重载+=
	void clear();//清空
	void Swap(Mystring& s);//交换两个对象



	//容量操作
	size_t size()const;//返回size
	size_t capacity()const;//返回capacity
	bool empty()const;//判断字符串是否为空
	void reserve(size_t New_capacity);//扩容不初始化
	void resize(size_t NewSize, char c = '\0');//设置size并初始化

	//访问操作
	char& operator[](size_t index);//重载[]
	const char& operator[](size_t index)const;//重载[]
	const char* c_str() const;//返回字符数组指针
	//关系判断
	bool operator<(const Mystring& s);//重载<
	bool operator<=(const Mystring& s);//重载<=
	bool operator>(const Mystring& s);//重载>
	bool operator>=(const Mystring& s);//重载>=
	bool operator==(const Mystring& s);//重载==
	bool operator!=(const Mystring& s);//重载!=


	//其他操作
	size_t find(char c, size_t pos = 0)const;//返回指定字符第一次出现的位置
	size_t find(const char* s, size_t pos = 0)const;//返回第一个匹配的字符串
	Mystring& insert(size_t pos, char c);//在某个位置插入一个字符
	Mystring& insert(size_t pos, const char* str);//某个位置插入一个字符串
	Mystring& erase(size_t pos, size_t len=-1);


private:
	char* _str;
	size_t _size;
	size_t _capacity;
};
