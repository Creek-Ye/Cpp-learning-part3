#include<iostream>
using namespace std;
//1.����ͨ�����ͺ���ģ�嶼�ܵ��ã����ȵ�����ͨ����
//2.����ǿ�Ƶ��ú���ģ���ʹ�ÿ�ģ������б�������
//3.����ģ��Ҳ���Է�������
//4.�������ģ����Է������õ�ƥ�䣬���ȵ��ú���ģ��
void myfunc(int a, int b)
{
	cout << "��ͨ�����ĵ���" << endl;
}
template<typename T>
void myfunc(T a, T b)
{
	cout << "����ģ��ĵ���" << endl;
}
template<typename T>
void myfunc(T a, T b, T c)
{
	cout << "����ģ�����صĵ���" << endl;
}


int main()
{
	myfunc(10, 20);//��ͨ�����ͺ���ģ�嶼�ܵ��õ�ʱ�����ȵ�����ͨ����
	myfunc<>(10,20);//����ǿ�Ƶ��ú���ģ���ʹ�ÿ�ģ������б�������
	myfunc<>(10,20,30);//����ģ��Ҳ���Է�������
	myfunc(10, 20, 30);
	myfunc('a', 'c');//�����ȵ��ú���ģ��
	system("pause");
	return 0;
}