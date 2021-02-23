#include "Date.h"

int main()
{
	Date d1(2021, 2, 23);
	Date d2(d1);
	d2 += 10;
	std::cout << d2 - d1 << std::endl;

	

}