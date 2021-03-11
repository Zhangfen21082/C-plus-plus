#include <iostream>
using namespace std;


class Date
{
public:
	Date()
		:_year(1998)
		,_month(12)
		,_day(20)
	{
		cout << "调用了构造函数" << endl;
	}
	~Date()
	{
		cout << "调用了析构函数" << endl;
	}
	

private:
	int _year;
	int _month;
	int _day;
};

int main()
{
	Date* p2 = new Date[5];

	delete[] p2;
}