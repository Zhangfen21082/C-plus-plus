#include <iostream>

class Date
{
public:
	void print();

	//用于获取某月的月份
	int GetMonthDay(int year, int month);
	//全缺省构造函数
	Date(int year = 2000, int month = 1, int day = 1);
	//拷贝构造
	Date(const Date& d);

	//赋值重载
	Date& operator=(const Date& d);
	//日期+=天数
	Date& operator+=(int day);
	//日期+天数
	Date operator+(int day);;
	//日期-=天数
	Date& operator-=(int day);
	//日期-天数
	Date operator-(int day);

	//前置++；
	Date& operator++();
	//后置++
	Date operator++(int);
	//前置--；
	Date& operator--();
	//后置--
	Date operator--(int);


	// ==重载
	bool operator==(const Date& d);
	// !=重载
	bool operator!=(const Date& d);

	// >重载
	bool operator>(const Date& d);
	//<=重载
	bool operator<=(const Date& d);
	// >=重载
	inline bool operator>=(const Date& d);
	// <重载
	bool operator<(const Date& d);
	
	

	//日期-日期
	int operator-(const Date& d);

	


private:
	int _year;
	int _month;
	int _day;
};