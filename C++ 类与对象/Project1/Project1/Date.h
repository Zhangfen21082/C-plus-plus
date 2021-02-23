#include <iostream>

class Date
{
public:
	void print();

	//���ڻ�ȡĳ�µ��·�
	int GetMonthDay(int year, int month);
	//ȫȱʡ���캯��
	Date(int year = 2000, int month = 1, int day = 1);
	//��������
	Date(const Date& d);

	//��ֵ����
	Date& operator=(const Date& d);
	//����+=����
	Date& operator+=(int day);
	//����+����
	Date operator+(int day);;
	//����-=����
	Date& operator-=(int day);
	//����-����
	Date operator-(int day);

	//ǰ��++��
	Date& operator++();
	//����++
	Date operator++(int);
	//ǰ��--��
	Date& operator--();
	//����--
	Date operator--(int);


	// ==����
	bool operator==(const Date& d);
	// !=����
	bool operator!=(const Date& d);

	// >����
	bool operator>(const Date& d);
	//<=����
	bool operator<=(const Date& d);
	// >=����
	inline bool operator>=(const Date& d);
	// <����
	bool operator<(const Date& d);
	
	

	//����-����
	int operator-(const Date& d);

	


private:
	int _year;
	int _month;
	int _day;
};