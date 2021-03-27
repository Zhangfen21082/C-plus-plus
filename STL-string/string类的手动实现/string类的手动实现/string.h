#pragma once
#define _CRT_SECURE_NO_WARNINGS 1
#include <iostream>
#include <assert.h>
#include <string.h>
using namespace std;

class Mystring
{

//��Ԫ�������������
friend ostream& operator<<(ostream& out, const Mystring& s);
friend istream& operator>>(istream& in, Mystring& s);

public:
	typedef char* iterator;


	Mystring(const char* str="");//���캯��
	~Mystring();//��������
	Mystring(const Mystring& s);//��������
	Mystring& operator=(Mystring s);//����=


	iterator begin()//������
	{
		return _str;
	}
	iterator end()//������
	{
		return _str + _size;
	}


	//�޸Ĳ���
	void push_back(char ch);//׷��һ���ַ�
	void append(const char* str);//׷��һ���ַ���
	Mystring& operator+=(char ch);//����+=
	Mystring& operator+=(const char* str);//����+=
	void clear();//���
	void Swap(Mystring& s);//������������



	//��������
	size_t size()const;//����size
	size_t capacity()const;//����capacity
	bool empty()const;//�ж��ַ����Ƿ�Ϊ��
	void reserve(size_t New_capacity);//���ݲ���ʼ��
	void resize(size_t NewSize, char c = '\0');//����size����ʼ��

	//���ʲ���
	char& operator[](size_t index);//����[]
	const char& operator[](size_t index)const;//����[]
	const char* c_str() const;//�����ַ�����ָ��
	//��ϵ�ж�
	bool operator<(const Mystring& s);//����<
	bool operator<=(const Mystring& s);//����<=
	bool operator>(const Mystring& s);//����>
	bool operator>=(const Mystring& s);//����>=
	bool operator==(const Mystring& s);//����==
	bool operator!=(const Mystring& s);//����!=


	//��������
	size_t find(char c, size_t pos = 0)const;//����ָ���ַ���һ�γ��ֵ�λ��
	size_t find(const char* s, size_t pos = 0)const;//���ص�һ��ƥ����ַ���
	Mystring& insert(size_t pos, char c);//��ĳ��λ�ò���һ���ַ�
	Mystring& insert(size_t pos, const char* str);//ĳ��λ�ò���һ���ַ���
	Mystring& erase(size_t pos, size_t len=-1);


private:
	char* _str;
	size_t _size;
	size_t _capacity;
};
