#include<iostream>
using namespace std;
#include <string>;

class person
{
	//构造函数
	person(string name, int age)
	{
		this->m_name = name;
		this->m_age = age;
	}
	//==号!= 比较运算符号的重载
	void operator
public:
	string m_name;
	int m_age;
};

template<typename T>
bool mycompare(T a,T b)
{
	if (a == b)
	{
		return true;
	}
	else
	{
		return false;
	}
}
void test01()
{
	int ref = mycompare(10, 20);
	if (ref == true)
	{
		cout << "传入的两个数相等" << endl;
	}
	else
	{
		cout << "传入的两个数不相等" << endl;
	}
}
int main()
{
	test01();
	system("pause");
	return 0;
}