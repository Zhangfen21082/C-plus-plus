#include "Date.h"


void Date::print()
{
	std::cout << _year << "-" << _month << "-" << _day << std::endl;
}

int Date::GetMonthDay(int year, int month)
{
	int month_days[] = { 0,31,28,31,30,31,30,31,31,30,31,30,31 };
	int days = month_days[month];
	if (month == 2 && (year % 4 == 0 && year % 100 != 0 || year % 400 == 0))//������
	{
		days = 29;
	}
	return days;

}
//���캯��
Date::Date(int year, int month, int day)
{
	if (year >= 0 && month > 0 && month < 13 && day>0 && day < GetMonthDay(year, month))
	{
		_year=year;
		_month=month;
		_day=day;
	}
	else
		std::cout << "���ݴ���" << std::endl;
	
}
//��������
Date::Date(const Date& d)
{
	_year = d._year;
	_month = d._month;
	_day = d._day;

}
//��ֵ����
Date& Date::operator=(const Date& d)
{
	if (this != &d)
	{
		_year = d._year;
		_month = d._month;
		_day = d._day;
	}
	return *this;
}
//����+=����
Date& Date::operator+=(int day)
{
	_day = _day + day;
	while(_day > GetMonthDay(_year, _month))
	{
		_day=_day-GetMonthDay(_year,_month);
		_month ++;
		if(_month==13)
		{
			_month = 1;
			_year++;
		}
	}
	return *this;
}

//����+����
Date Date::operator+(int day)
{
	Date ret(*this);
	ret += day;

	return ret;

}

//����-=����
Date& Date::operator-=(int day)
{
	_day = _day - day;
	while (_day < 0)
	{
		_month--;
		_day = _day + GetMonthDay(_year, _month);
		if (_month == 0)
		{
			_month = 13;
			_year--;
		}
	}
	return *this;

}

//����-����
Date Date::operator-(int day)
{
	Date ret(*this);
	ret -= day;
	return ret;

}
//ǰ��++
Date& Date::operator++()
{
	(*this) += 1;
	return *this;
}
//����++
Date Date::operator++(int)
{
	Date ret(*this);
	(*this) += 1;
	return ret;
}
//ǰ��--
Date& Date::operator--()
{
	(*this) -= 1;
	return *this;
}
//����++
Date Date::operator--(int)
{
	Date ret(*this);
	(*this) -= 1;
	return ret;
}

//==���غ�!=����
bool Date::operator==(const Date& d)
{
	return _year == d._year 
		   && _month == d._month 
		   && _day == d._day;

}
bool Date::operator!=(const Date& d)
{
	return !((*this) == d);

}
//>����
bool Date::operator>(const Date& d)
{
	if (_year > d._year)
	{
		return true;	
	}
	if (_year == d._year)
	{
		if (_month > d._month)
			return true;
		if (_month == d._month)
		{
			if (_day > d._day)
				return true;
			else
				return false;
		}
	}
	return false;

}

//<���� 
bool Date::operator<(const Date& d)
{
	if (_year < d._year)
	{
		return true;
	}
	if (_year == d._year)
	{
		if (_month < d._month)
			return true;
		if (_month == d._month)
		{
			if (_day < d._day)
				return true;
			else
				return false;
		}
	}
	return false;
}
//>=���� ����<����ȡ��
bool Date::operator>=(const Date& d)
{
	return !((*this) < d);
}
//<=�������� ����>����ȡ��
bool Date::operator<=(const Date& d)
{
	return !((*this) > d);
}

int Date::operator-(const Date& d)
{
	Date max = *this, min = d;
	int flag = 1;//���*this������֮��Ϊ����
	if (*this<d)
	{
		max = d;
		min = *this;
		flag = -1;//���d������֮��Ϊ����
	}
	int n = 0;
	while (min != max)
	{
		min++;
		n++;
	}
	return n*flag;



}