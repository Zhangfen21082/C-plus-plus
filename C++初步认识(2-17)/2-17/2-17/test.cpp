#define _CRT_SECURE_NO_WARNINGS
#include <iostream>


//int main()
//{
//	/*int a = 1;
//	double b = 2;
//	char c = 100;
//	int* p = &a;
//
//	std::cout << a << std::endl << b << std::endl << c << std::endl;
//	return 0;*/
//
//
//	int a = 0;
//	char c;
//	std::cin >> a >> c;
//	std::cout<< a << std::endl << c << std::endl; 
//	return 0;
//
//
//}


void test(int a , int b, int c=3)
{
	std::cout << a << std::endl;
	std::cout << b << std::endl;
	std::cout << c << std::endl;

}

int main()
{
	std::cout << "��Ĭ��ʱ���������봫��" << std::endl;
	test(99,88);
	std::cout << "��Ȼ��Ĭ��λ����Ȼ���Դ���" << std::endl;
	test(99, 88,77);


}