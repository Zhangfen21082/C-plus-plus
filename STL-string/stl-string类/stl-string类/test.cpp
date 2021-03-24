#include <iostream>
#include <string>

using namespace std;

//int main()
//{
//	string url("http://www.cplusplus.com/reference/string/string/substr/");//原网址
//	size_t pos1 = url.find(":");//pos1用来定位冒号
//
//	size_t pos2 = pos1 + 3;//pos2进行偏移，偏移值www开头
//	size_t pos3 = url.find(".com/");//pos用来找到域名结束
//	pos3 += 4;//偏移至资源开始处
//
//
//	string first = url.substr(0, 4);
//	string second = url.substr(pos2, pos3 - pos2);//pos3-pos2既是域名
//	string third = url.substr(pos3);//最后一段
//
//	cout << first << endl;
//	cout << second<< endl;
//	cout << third << endl;
//	
//
//}
//int main()
//{
//	string filename("test.txt.tar.zip");
//	size_t pos = filename.rfind(".");
//	string suffix = filename.substr(pos);
//	cout << suffix << endl;
//
//}
//int main()
//{
//	string strText = "How are you?";
//	string strSeparator = " ";
//	string strResult;
//	int size_pos = 0;
//	int size_prev_pos = 0;
//	while ((size_pos = strText.find_first_of(strSeparator, size_pos)) != string::npos)
//	{
//		strResult = strText.substr(size_prev_pos, size_pos - size_prev_pos);
//		cout << strResult << " ";
//		size_prev_pos = ++size_pos;
//	}
//
//	if (size_prev_pos != strText.size())
//	{
//		strResult = strText.substr(size_prev_pos, size_pos - size_prev_pos);
//		cout << strResult << " ";
//	}
//	cout << endl;
//
//	return 0;
//
//
//}


//int main()
//{
//	string str = "Hello Bit.";
//	string::iterator it = str.begin();
//	while (it != str.end())
//	{
//		if (*it != ' ')
//			cout << *it;
//		else
//			str.erase(it);
//		it++;
//	}
//	return 0;
//
//
//}

//int main()
//{
//	string test("Let's take LeetCode contest");
//	int start = 0;
//	size_t tail = test.find_first_of(" ");
//	while (tail != string::npos)
//	{
//		reverse(test.begin() + start, test.begin() + tail );
//		start = tail + 1;
//		tail = test.find_first_of(" ", tail + 1);
//	}
//	cout << test << endl;
//
//}

void getnext(string& target, int next[])
{
	int i = 0;
	int k = -1;
	next[0] = -1;
	while (i < target.size() - 1)
	{
		if (k == -1 || target[i] == target[k])
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

}
int strStr(string haystack, string needle)
{
	int* next = new int[needle.size()];
	int i = 0;
	int j = 0;
	getnext(needle, next);
	int m = haystack.size();
	int n = needle.size();

	while (i<m && j<n )
	{
		if (haystack[i] == needle[j] || j == -1)
		{

			i++;
			j++;

		}
		else
		{
			j = next[j];
		}
	}

	if (j >= needle.size())
		return i - (needle.size() - 1);
	else
		return -1;
}
int main()
{
	strStr("hello", "ll");

}