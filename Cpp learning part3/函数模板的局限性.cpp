#include<iostream>
using namespace std;
#include <string>;

class person
{
	//���캯��
	person(string name, int age)
	{
		this->m_name = name;
		this->m_age = age;
	}
	//==��!= �Ƚ�������ŵ�����
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
		cout << "��������������" << endl;
	}
	else
	{
		cout << "����������������" << endl;
	}
}
int main()
{
	test01();
	system("pause");
	return 0;
}