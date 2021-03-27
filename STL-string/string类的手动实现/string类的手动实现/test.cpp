#include "string.h"



void test1()//测试默认成员函数
{
	cout << "#############测试默认成员函数#####################" << endl;
	cout << endl;
	cout << endl;
	cout << endl;

	cout << "构造函数:生成test" << endl;
	Mystring test("this is a test");
	cout <<"test:"<< test << endl;
	cout << endl;

	cout << "拷贝构造函数:由test生成test1" << endl;
	Mystring test1(test);
	cout << "test1:" << test1 << endl;
	cout << endl;

	cout << "赋值重载=  test3=test1" << endl;
	Mystring test3;
	test3 = test1;
	cout << "test3:" << test << endl;
	cout << endl;



}

void  test2()//测试修改操作
{
	Mystring test("Hello");
	Mystring test1("World");
	cout << "#####################测试修改操作。测试用例为test："<<test<<"  test1:"<<test<<endl;
	cout << endl;
	cout << endl;
	cout << endl;

	cout << "test+=一个字符" << endl;
	test += 'y';
	cout << "test:" << test << endl;
	cout << endl;

	cout << "test+=一个字符串" << endl;
	test += " AAAA bbbb";
	cout << "test:" << test << endl;
	cout << endl;

	cout << "清空test" << endl;
	test.clear();
	cout << "test:" << test << endl;
	cout << endl;


	cout << "交换test和test1" << endl;
	test.Swap(test1);
	cout << "test:" << test << endl;
	cout << "tes1:" << test1 << endl;
	cout << endl;

}

void test3()
{
	Mystring test("Hello");
	Mystring test1("World");
	cout << "###########################测试修改操作。测试用例为test：" << test << "  test1:" << test << endl;
	cout << endl;
	cout << endl;
	cout << endl;

	cout << "使用[]遍历test" << endl;
	for (size_t i = 0; i < test.size(); i++)
	{
		cout << test[i]<<"   ";
	}
	cout << endl;

	cout << "使用迭代器iterator遍历test1" << endl;
	Mystring::iterator p = test1.begin();
	while (p != test1.end())
	{

		cout << *p << "   ";
		p++;
	}

	cout << endl;

	cout << "输出test对象的字符串首地址" << endl;
	printf("%p\n", test.c_str());


}

void test4()
{
	Mystring test("Hello");
	Mystring test1("World");
	cout << "###############################测试修改操作。测试用例为test：" << test << "  test1:" << test << endl;
	cout << endl;
	cout << endl;
	cout << endl;

	cout << "输出test的第一个l出现的位置" << endl;
	cout << test.find('l');
	cout << endl;

	cout << "输出test1的 or 出现的位置" << endl;
	cout << test1.find("or");
	cout << endl;

	cout << "在test的字母e后面插入字母x" << endl;
	test.insert(2, 'x');
	cout << "test:" << test << endl;
	cout << endl;

	cout << "在test1的字母r后面插入字符串this" << endl;
	test1.insert(2, "this");
	cout << "test1:" << test1 << endl;
	cout << endl;


	cout << "删除test的最后两个字母lo" << endl;
	test.erase(4);
	cout << "test:" << test << endl;
	cout << endl;

	

}

int main()
{
	test1();//测试默认成员函数
	test2();//测试修改操作
	test3();//访问操作和迭代器
	test4();//其他操作
}