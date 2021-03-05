#include <iostream>
#include <string>

//
//class Time
//{
//public:
//	Time(int hour)
//		:_hour(hour)
//	{
//		std::cout << "调用了Time的默认构造函数" << std::endl;
//	}
//
//private:
//		int _hour;
//};
//class Date
//{
//public:
//	Date(int hour)
//		:_t(hour)
//		, _n(132)
//		,_ref(_year)
//		,_year(1998)
//		,_month(12)
//		,_day(20)
//	{}
//private:
//	int _year; int _month; int _day;
//	Time _t; int& _ref; const int _n;
//};
//int main()
//{
//	Date d1(999);
//}
//class A
//{
//public:
//	A(int a)
//		:_a1(a)
//		, _a2(_a1)
//	{}
//	void print()
//	{
//		std::cout << _a1 << " " << _a2 << std::endl;
//	}
//private:
//	int _a2;
//	int _a1;
//};
//int main()
//{
//	A a(1);
//	a.print();
//}


//class Date
//{
//public:
//	explicit Date(int year)
//		:_year(year)
//	{}
//private:
//	int _year;
//};
//int main()
//{
//	Date d1(2020);
//	d1 = 2019;
//}



class Time
{
public:
	Time(int hour)
		:_hour(hour)
	{
		std::cout << "调用了Time的默认构造函数" << std::endl;
	}

private:
		int _hour;
};
class Date
{
public:
	Date(int hour=10)
		:_t(hour)
		,_year(1998)
		,_month(12)
		,_day(20)
	{}

private:
	int _year;
	int _month;
	int _day;

	Time _t;
};

int main()
{

	Date d1(1000);


}