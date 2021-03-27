#include "string.h"


Mystring::Mystring(const char* str)
{
	_size = strlen(str);
	_capacity = _size;
	_str = new char[_capacity + 1];
	strcpy(_str, str);


}


Mystring::~Mystring()
{
	delete[] _str;
	_str = nullptr;
}
Mystring::Mystring(const Mystring& s)
	:_str(nullptr)
{
	Mystring temp(s._str);
	swap(_str, temp._str);
	swap(_size,temp._size);
	swap(_capacity, temp._capacity);
}
Mystring& Mystring::operator=(Mystring s)
{
	swap(_str, s._str);
	swap(_size,s._size);
	swap(_capacity,s._capacity);

	return *this;



}

void Mystring::reserve(size_t New_capacity)
{
	if (New_capacity > _capacity)
	{
		char* temp = new char[New_capacity + 1];
		strcpy(temp, _str);
		delete[] _str;
		_str = temp;
		_capacity =New_capacity;
	}


}
void Mystring::push_back(char ch)
{
	if (_size == _capacity)
	{
		reserve(2 * _capacity);
	}
	_str[_size] = ch;
	_size += 1;
	_str[_size] = '\0';
}
void Mystring::append(const char* str)
{
	size_t len = strlen(str);
	if (_size + len > _capacity)
	{
		reserve(_size + len);
		
	}
	strcpy(_str + _size, str);
	_size += len;
}

Mystring& Mystring::operator+=(char ch)
{
	push_back(ch);
	return *this;
}
Mystring& Mystring::operator+=(const char* str)
{
	append(str);
	return *this;

}
void Mystring::clear()
{
	strcpy(_str, "");
	_size = 0;
	_capacity = 1;

}
void Mystring::Swap(Mystring& s)
{
	if (this != &s)
	{
		
		swap(_str, s._str);
		swap(_size, s._size);
		swap(_capacity, s._capacity);
	}
}

const char* Mystring::c_str() const
{
	return _str;
}

size_t Mystring::size()const
{
	return _size;
}
size_t Mystring::capacity()const
{
	return _capacity;
}
bool Mystring::empty()const
{
	if (strlen(_str) == 0)
	{
		return true;//��
	}
	else
	{
		return false;//����
	}

}

void Mystring::resize(size_t NewSize, char c)
{
	if (NewSize < _size)//���С��ԭ�ȵĿռ�
	{
		_str[NewSize] = '\0';//����������
		_size = NewSize;
	}
	else//�������ԭ�ȵĿռ�
	{
		if (NewSize > _capacity)//������ڿռ�
			reserve(NewSize);//����
		for (size_t i = _size; i < NewSize; i++)
		{
			_str[i] = c;//�Ž��ַ�
		}
		_str[NewSize] = '\0';
		_size = NewSize;
	}
}
char& Mystring::operator[](size_t index)
{
	return _str[index];
}
const char& Mystring::operator[](size_t index)const
{
	return _str[index];
}
bool Mystring::operator<(const Mystring& s)
{
	if (strcmp(_str, s._str) < 0)
	{
		return true;
	}
	else
	{
		return false;
	}
}
bool Mystring::operator==(const Mystring& s)
{
	if (strcmp(_str, s._str) == 0)
		return true;
	else
		return false;

}
bool Mystring::operator<=(const Mystring& s)
{
	
	if (*this < s||*this == s)
	{
		return true;
	}
	else
	{
		return false;
	}
}
bool Mystring::operator>(const Mystring& s)
{
	if (!(*this <= s))
	{
		return true;
	}
	else
	{
		return false;
	}

}
bool Mystring::operator>=(const Mystring& s)
{
	if (!(*this < s))
		return true;
	else
		return false;
}
bool Mystring::operator!=(const Mystring& s)
{
	if (!(*this == s))
		return true;
	else
		return false;

}
ostream& operator<<(ostream& out, const Mystring& s)//�������Ԫ
{
	for (size_t i = 0; i < s.size(); i++)//���������Ч�ַ�
	{
		out << s[i];
	}
	return out;
}
istream& operator>>(istream& in,  Mystring& s)//���룬��Ԫ
{
	s.resize(0);
	char ch;
	while (1)
	{
		in.get(ch);
		if (ch == ' ' || ch == '\n')
			break;
		else
			s += ch;
	}
	return in;
}
size_t Mystring::find(char c, size_t pos)const

{
	for (size_t i = 0; i < this->size(); i++)
	{
		if ((*this)[i] == c)
		{
			return i;
		}
	}
	return -1;

}

size_t Mystring::find(const char* s, size_t pos)const
{
	/*
	�ַ���ƥ�䣬ʹ��KMP�㷨��������
	��ƪ���� https://blog.csdn.net/qq_39183034/article/details/115139682?spm=1001.2014.3001.5502

 */

	//��������next����
	size_t i = 0;
	int k = -1;
	int* next = new int[strlen(s)];
	next[0] = -1;
	while (i < strlen(s) - 1)
	{
		if (k==-1 || s[i] == s[k])
		{
			i++;
			k++;
			next[i] = k;
		}
		else
		{
			k = next[k];
		}
	}

	//������KMP�㷨�Ĵ���
	if (s == "")
		return 0;//����Ӵ��ǿյģ�����0
	int m = (*this).size();
	int n = strlen(s);

	int  mm = 0;
	int  nn = 0;
	while (mm < m && nn < n)
	{
		if (nn == -1 || (*this)[mm] == s[nn])
		{
			mm++;
			nn++;
		}
		else
		{
			nn = next[nn];
		}
	}
	if (nn >= strlen(s))
	{
		return mm - strlen(s);//�ҵ�����������
	}
	else
	{
		return -1;//�Ҳ��������±�
	}
}
Mystring& Mystring::insert(size_t pos, char c)
{
	if (_size >=_capacity)
		reserve(2 * _capacity);
	for (size_t i = _size ; i > pos; i--)//ע��������������
	{
		_str[i] = _str[i-1];
	}
	_str[pos] = c;
	_size += 1;
	_str[_size] = '\0';//��ֹ�����������

	return *this;

}
Mystring& Mystring::insert(size_t pos, const char* str)
{
	while (_size >= _capacity)
		reserve(2 * _capacity);
	for (size_t i = 0; i < strlen(str); i++)//һ���ַ�һ���ַ�����
	{
		char save = str[i];
		insert(pos, save);
		pos++;
	}
	return *this;


}

Mystring& Mystring::erase(size_t pos, size_t len)
{
	if (len == -1 || pos + len >= _size)//ֱ��ɾ��ĩβ
	{
		_str[pos] = '\0';//���
		_size = pos;
	}
	else
	{
		strcpy(_str + pos, _str + pos + len);
		_size -= len;
	}
	return *this;
}