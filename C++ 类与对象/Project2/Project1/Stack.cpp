#include <iostream>
#include <string>
//
////
////class Time
////{
////public:
////	Time(int hour)
////		:_hour(hour)
////	{
////		std::cout << "调用了Time的默认构造函数" << std::endl;
////	}
////
////private:
////		int _hour;
////};
////class Date
////{
////public:
////	Date(int hour)
////		:_t(hour)
////		, _n(132)
////		,_ref(_year)
////		,_year(1998)
////		,_month(12)
////		,_day(20)
////	{}
////private:
////	int _year; int _month; int _day;
////	Time _t; int& _ref; const int _n;
////};
////int main()
////{
////	Date d1(999);
////}
////class A
////{
////public:
////	A(int a)
////		:_a1(a)
////		, _a2(_a1)
////	{}
////	void print()
////	{
////		std::cout << _a1 << " " << _a2 << std::endl;
////	}
////private:
////	int _a2;
////	int _a1;
////};
////int main()
////{
////	A a(1);
////	a.print();
////}
//
//
////class Date
////{
////public:
////	explicit Date(int year)
////		:_year(year)
////	{}
////private:
////	int _year;
////};
////int main()
////{
////	Date d1(2020);
////	d1 = 2019;
////}
//
//
//
////class Time
////{
////public:
////	Time(int hour)
////		:_hour(hour)
////	{
////		std::cout << "调用了Time的默认构造函数" << std::endl;
////	}
////
////private:
////		int _hour;
////};
////class Date
////{
////public:
////	Date(int hour=10)
////		:_t(hour)
////		,_year(1998)
////		,_month(12)
////		,_day(20)
////	{}
////
////private:
////	int _year;
////	int _month;
////	int _day;
////
////	Time _t;
////};
////
////int main()
////{
////
////	Date d1(1000);
////
////
////}
////class A
////{
////public:
////	A()//构造函数
////	{
////		++_cout;
////	}
////	A(const A& t)//拷贝构造
////	{
////		++_cout;
////	}
////	static int getcout()
////	{
////		return _cout;
////	}
////
//////private:
////	static int _cout;
////};
////int A::_cout = 0;
////
////int main()
////{
////	A a1;
////	A a2;
////	A a3(a1);
////	std::cout << A::getcout() << std::endl;
////
////
////
////}
//
////class sum
////{
////public:
////	static void change()
////	{
////		_ret = 0;
////		_i = 1;
////	}
////	sum()
////	{
////		_ret += _i;
////		_i ++;
////	}
////	static int getret()
////	{
////		return _ret;
////	}
////
////private:
////	static int _ret;
////	static int _i;
////};
////int sum::_ret = 0;
////int sum::_i = 1;
////
////
////class Solution {
////public:
////	int Sum_Solution(int n)
////	{
////		sum::change();
////
////		sum* p = new sum[n];
////
////
////		return sum::getret();
////	}
////};
////
////int main()
////{
////	std::cout << Solution().Sum_Solution(1) << std::endl;
////	std::cout << Solution().Sum_Solution(2) << std::endl;
////	std::cout << Solution().Sum_Solution(3) << std::endl;
////	std::cout << Solution().Sum_Solution(4) << std::endl;
////	std::cout << Solution().Sum_Solution(5) << std::endl;
////
////
////}
//
//
//
////friend std::ostream& operator<<(std::ostream& out, const Date& d);
////public:
////	Date(int year, int month, int day)
////		:_year(year)
////		,_month(month)
////		,_day(day)
////	{}
////
////private:
////	int _year;
////	int _month;
////	int _day;
////};
////
////std::ostream& operator<<(std::ostream& out, const Date& d)
////{
////	out << d._year << "-" << d._month << "-" << d._day;
////	return out;
////}
////
////int main()
////{
////	Date d1(2000, 1, 1);
////	Date d2(2000, 1, 2);
////	std::cout << d1 <<std::endl<< d2;
////
////}
//
////class A
////{
////public:
////	A()//构造函数
////	{
////		++_cout;
////	}
////	A(const A& t)//拷贝构造
////	{
////		++_cout;
////	}
////	static int getcout()//静态
////	{
////		return _cout;
////	}
////
////
////private:
////	static int _cout;
////};
////int A::_cout = 0;
////
////int main()
////{
////	A a1;
////	A a2;
////	A a3(a1);
////	A();
////	std::cout << A::getcout() << std::endl;
////
////}
//class sum
//{
//public:
//	static void change()
//	{
//		_ret = 0;
//		_i = 1;
//	}
//	sum()
//	{
//		_ret += _i;
//		_i++;
//	}
//	static int getret()
//	{
//		return _ret;
//	}
//
//private:
//	static int _ret;
//	static int _i;
//};
//int sum::_ret = 0;
//int sum::_i = 1;
//
//class Solution {
//public:
//	int Sum_Solution(int n)
//	{
//		sum* p = new sum[n];
//
//		return sum::getret();
//	}
//};
//
//int main()
//{
//	std::cout << Solution().Sum_Solution(1) << std::endl;
//	/*std::cout << Solution().Sum_Solution(2) << std::endl;
//	std::cout << Solution().Sum_Solution(3) << std::endl;
//	std::cout << Solution().Sum_Solution(4) << std::endl;*/
//	std::cout << Solution().Sum_Solution(5) << std::endl;
//
//}

//int main()
//{
//	float c = 1.0;
//
//	float* &c;
//
//}

//istream& operator>>(istream& in, Date& d)
//{
//	in >> d._year;
//	in >> d._month;
//	in >> d._day;
//	return in;
//
//}
//using namespace std;
//
//class Date;//前置声明
//class Time
//{
//	friend ostream& operator<<(ostream& out, Date& d);
//	friend class Date;//Date类是Time类的友元
//public:
//	Time(int hour, int minute, int second)
//		:_hour(hour)
//		,_minute(minute)
//		,_second(second)
//	{}
//private:
//	int _hour;
//	int _minute;
//	int _second;
//};
//
//
//class Date
//{
//friend ostream& operator<<(ostream& out, Date& d);
//public:
//	Date(int year, int month, int day, int hour, int minute, int second)
//		:_year(year)
//		,_month(month)
//		,_day(day)
//		,_t(hour,minute,second)
//	{}
//private:
//	int _year;
//	int _month;
//	int _day;
//
//	Time _t;
//};
//ostream& operator<<(ostream& out, Date& d)
//{
//	out << d._year << "年" << d._month << "月" << d._day << "日" <<
//		" " << d._t._hour << "时" << d._t._minute << "分" << d._t._second << "秒";
//	return out;
//}
//
//int main()
//{
//	Date d1(1998, 12, 20,17,25,9);
//	cout << d1;
//	
//}

using namespace std;
class Date
{
friend ostream& operator<<(ostream& out, Date& d);
public:
	Date(int year, int month, int day)
		:_year(year)
		, _month(month)
		, _day(day)
	{}
private:
	int _year;
	int _month;
	int _day;
};
ostream& operator<<(ostream& out, Date& d)
{
	out << d._year << " " << d._month << " " << d._day << " " << endl;

	return out;
}

int main()
{
	Date d1(2000, 1, 1);
	Date d2(1998, 12, 20);
	cout << d1 << d2;
}