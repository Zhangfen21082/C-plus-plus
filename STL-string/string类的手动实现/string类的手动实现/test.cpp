#include "string.h"



void test1()//����Ĭ�ϳ�Ա����
{
	cout << "#############����Ĭ�ϳ�Ա����#####################" << endl;
	cout << endl;
	cout << endl;
	cout << endl;

	cout << "���캯��:����test" << endl;
	Mystring test("this is a test");
	cout <<"test:"<< test << endl;
	cout << endl;

	cout << "�������캯��:��test����test1" << endl;
	Mystring test1(test);
	cout << "test1:" << test1 << endl;
	cout << endl;

	cout << "��ֵ����=  test3=test1" << endl;
	Mystring test3;
	test3 = test1;
	cout << "test3:" << test << endl;
	cout << endl;



}

void  test2()//�����޸Ĳ���
{
	Mystring test("Hello");
	Mystring test1("World");
	cout << "#####################�����޸Ĳ�������������Ϊtest��"<<test<<"  test1:"<<test<<endl;
	cout << endl;
	cout << endl;
	cout << endl;

	cout << "test+=һ���ַ�" << endl;
	test += 'y';
	cout << "test:" << test << endl;
	cout << endl;

	cout << "test+=һ���ַ���" << endl;
	test += " AAAA bbbb";
	cout << "test:" << test << endl;
	cout << endl;

	cout << "���test" << endl;
	test.clear();
	cout << "test:" << test << endl;
	cout << endl;


	cout << "����test��test1" << endl;
	test.Swap(test1);
	cout << "test:" << test << endl;
	cout << "tes1:" << test1 << endl;
	cout << endl;

}

void test3()
{
	Mystring test("Hello");
	Mystring test1("World");
	cout << "###########################�����޸Ĳ�������������Ϊtest��" << test << "  test1:" << test << endl;
	cout << endl;
	cout << endl;
	cout << endl;

	cout << "ʹ��[]����test" << endl;
	for (size_t i = 0; i < test.size(); i++)
	{
		cout << test[i]<<"   ";
	}
	cout << endl;

	cout << "ʹ�õ�����iterator����test1" << endl;
	Mystring::iterator p = test1.begin();
	while (p != test1.end())
	{

		cout << *p << "   ";
		p++;
	}

	cout << endl;

	cout << "���test������ַ����׵�ַ" << endl;
	printf("%p\n", test.c_str());


}

void test4()
{
	Mystring test("Hello");
	Mystring test1("World");
	cout << "###############################�����޸Ĳ�������������Ϊtest��" << test << "  test1:" << test << endl;
	cout << endl;
	cout << endl;
	cout << endl;

	cout << "���test�ĵ�һ��l���ֵ�λ��" << endl;
	cout << test.find('l');
	cout << endl;

	cout << "���test1�� or ���ֵ�λ��" << endl;
	cout << test1.find("or");
	cout << endl;

	cout << "��test����ĸe���������ĸx" << endl;
	test.insert(2, 'x');
	cout << "test:" << test << endl;
	cout << endl;

	cout << "��test1����ĸr��������ַ���this" << endl;
	test1.insert(2, "this");
	cout << "test1:" << test1 << endl;
	cout << endl;


	cout << "ɾ��test�����������ĸlo" << endl;
	test.erase(4);
	cout << "test:" << test << endl;
	cout << endl;

	

}

int main()
{
	test1();//����Ĭ�ϳ�Ա����
	test2();//�����޸Ĳ���
	test3();//���ʲ����͵�����
	test4();//��������
}