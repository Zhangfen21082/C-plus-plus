#include <iostream>
#include "Person.h"

class Time
{
public:
	Time()
	{
		std::cout << "调用了Time()" << std::endl;
		_hour = 0;
		_minute = 0;
		_second = 0;
	}

private:
	int _hour;
	int _minute;
	int _second;
};
class Date
{
private:
	//基本类型
	int _year;
	int _month;
	int _day;

	//自定义类型
	Time _t;
};
int main()
{
	Date d;
	return 0;


}