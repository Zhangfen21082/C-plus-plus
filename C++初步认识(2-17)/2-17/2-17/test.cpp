#define _CRT_SECURE_NO_WARNINGS
#include <iostream>
#include "sum.h"


////int main()
////{
////	/*int a = 1;
////	double b = 2;
////	char c = 100;
////	int* p = &a;
////
////	std::cout << a << std::endl << b << std::endl << c << std::endl;
////	return 0;*/
////
////
////	int a = 0;
////	char c;
////	std::cin >> a >> c;
////	std::cout<< a << std::endl << c << std::endl; 
////	return 0;
////
////
////}
//
//
//void test(int a , int b, int c=3)
//{
//	std::cout << a << std::endl;
//	std::cout << b << std::endl;
//	std::cout << c << std::endl;
//
//}
//
//int main()
//{
//	std::cout << "��Ĭ��ʱ���������봫��" << std::endl;
//	test(99,88);
//	std::cout << "��Ȼ��Ĭ��λ����Ȼ���Դ���" << std::endl;
//	test(99, 88,77);
//
//
//}
//
//int main()
//{
//	sum(1, 2);
//	return 0;
//}


//int main()
//{
//	int a = 10;
//	int& b = a;
//	int& c = b;
//	for (int i = 0; i < 10; i++)
//	{
//		a = i;
//	}
//}

//int& sum(int x,int y)
//{
//	int ret = x + y;
//	return ret;
//}
//int main()
//{
//	int& receive = sum(1,2);
//	sum(3, 4);
//	printf("Hello!\n");
//	std::cout << receive << std::endl;
//	return 0;
//
//}

//int main()
//{
//	int a = 10;
//	
//	int& ra = a;
//	ra = 20;
//
//	int* pa = &a;
//	*pa = 20;
//
//	return 0;
//}

//int add(int x, int y)
//{
//	return x + y;
//}
//int main()
//{
//	int ret = 0;
//	ret = add(1, 2);
//	return 0;
//}


//int main()
//{
//	int a = 10;
//	auto b = a;
//	auto c = 's';
//
//	std::cout << typeid(b).name() << std::endl;
//	std::cout << typeid(c).name() << std::endl;
//
//
//	/*auto e;������д���Ǵ���ģ�ʹ��auto�������ʱ�����ʼ��
//		�������������֪������ʲô���͵�*/
//	return 0;


//int main()
//{
//	int x = 10;
//	auto a1 = &x;//����ָ��
//	auto* a2 = &x;//����ָ��
//
//	auto c1 = x;//����Ϊ��int
//	auto& c2 = x;//����Ϊ������
//
//	std::cout << typeid(a1).name() << std::endl;
//	std::cout << typeid(a2).name() << std::endl;
//	std::cout << typeid(c1).name() << std::endl;
//	std::cout << typeid(c2).name() << std::endl;
//
//	c2 = 20;
//	std::cout << "x=" << x <<std::endl;
//	std::cout << "c1=" << c1 <<std::endl;
//
//}

//int main()
//{
//	int arr[] = { 1,2,3,4,5 };
//	for (auto& x : arr)
//		x *= 2;
//
//
//	for (auto x : arr)
//		std::cout << x << " ";
//
//}

//void test(int)
//{
//	std::cout << "������f(int)"<< std::endl;
//}
//void test(int*)
//{
//	std::cout << "������f(int*)" << std::endl;
//}
//int main()
//{
//	test(0);
//	test(nullptr);
//	return 0;
//
//}