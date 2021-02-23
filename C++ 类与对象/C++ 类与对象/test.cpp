#include <iostream>
//#include "Person.h"
//#define _CRT_SECURE_NO_WARNINGS 
#pragma warning(disable:4996)
//class Time
//{
//public:
//	Time()
//	{
//		std::cout << "调用了Time()" << std::endl;
//		_hour = 0;
//		_minute = 0;
//		_second = 0;
//	}
//
//private:
//	int _hour;
//	int _minute;
//	int _second;
//};
//class String
//{
//public:
//	String(const char* str = "zhangxing")
//	{
//		_str = (char*)malloc(strlen(str) + 1);
//		strcpy(_str, str);
//	}
//	~String()
//	{
//		std::cout << "调用了String的析构函数" << std::endl;
//		free(_str);
//	}
//private:
//	char* _str;
//};
//
//class Person
//{
//private:
//	int _age;//内置类型
//	String _name;//自定义类型
//
//
//};
//
//int main()
//{
//	Person p;
//
//}

//
//class Date
//{
//public:
//	Date(int year = 1900, int month = 1, int day = 1)
//	{
//		std::cout << "d1的构造函数" << std::endl;
//		_year = year;
//		_month = month;
//		_day = day;
//	}
//
//	void print()
//	{
//		std::cout << _year << "-" << _month << "-" << _day << std::endl;
//	}
//private:
//	int _year;
//	int _month;
//	int _day;
//};
//
//int main()
//{
//	Date d1;
//	Date d2(d1);
//
//	d1.print();
//	d2.print();
//	return 0;
//
//}

//class Stack
//{
//
//public:
//	Stack(int capacity = 4)
//	{
//		_arr = (int*)malloc(sizeof(int)*capacity);
//		_lenght = 0;
//		_capacity = capacity;
//	}
//	~Stack()
//	{
//		free(_arr);
//		_arr = NULL;
//		_lenght = 0;
//		_capacity = 0;
//	
//	}
//
//private:
//	int* _arr;
//	int _lenght;
//	int _capacity;
//
//};
//
//int main()
//{
//	Stack s1;
//	Stack s2(s1);
//
//	return 0;
//
//}
//class Time
//{
//public:
//	Time()
//	{
//		std::cout << "调用了time构造函数" << std::endl;
//		_hour = 0;
//		_minute = 0;
//		_seconds = 0;
//
//	}
//private:
//	int _hour;
//	int _minute;
//	int _seconds;
//
//};


class Date
{
public:
	Date(int year = 2000, int month = 1, int day = 1)
	{
		_year = year;
		_month = month;
		_day = day;
	}
	void DisPlay()
	{
		std::cout << _year << "-" << _month << "-" << _day << std::endl;
	}
	//Date& operator=(Date& d)
	//{
	//	_year = d._year;
	//	_month = d._month;
	//	_day = d._day;

	//	return *this;
	//}
private:
	int _year;
	int _month;
	int _day;
};
int main()
{
	Date d1(2002, 2, 2);
	Date d2(2001,2,2);
	
	d1.DisPlay();
	d1 = d2;
	d1.DisPlay();
}