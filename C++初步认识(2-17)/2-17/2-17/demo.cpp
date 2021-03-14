
#define _CRT_SECURE_NO_WARNINGS 

#include <iostream>


void test(int a,int b=1)
{
	std::cout << a << std::endl;
	std::cout << b << std::endl;

}
int main()
{
	//test();
	test(99,88);
	test(99,88);
	test(99,88);
	test(99,88);
	test(99,88);
	test(99,88);

}