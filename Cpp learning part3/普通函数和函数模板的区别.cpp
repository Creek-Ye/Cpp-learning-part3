#include<iostream>
using namespace std;

//��ͨ�����ĵ��ÿ��Է�����ʽת��
int add(int a, int b)
{
	return a + b;
}

void test01()
{
	int a = 10;
	int b = 20;
	char c = 'c';
	cout << add(a, c) << endl;//��ͨ�����ĵ��ÿ��Է�����ʽת��������c��ֵת��asciiֵΪint ����ӡ�
}


template<class T>
T add02(T a, T b)
{
	return a + b;
}

void test02()
{
	int a = 10;
	int b = 20;
	char c = 'c';
	//���ú����Զ��Ƶ�������ģ�庯��
	//add02(a, c);//�ᱨ�������Զ��Ƶ������Դ��벻ͬ���͵����ݸ�ģ��

	//����ָ���������������ú���ģ��
	int k=add02<int>(a, c);//���Ե��ú���ģ��ɹ���������ʽת����
	cout << k << endl;
}
int main()
{
	test01();
	test02();
	system("pause");
	return 0;
}