#include<iostream>
using namespace std;

//普通函数的调用可以发生隐式转换
int add(int a, int b)
{
	return a + b;
}

void test01()
{
	int a = 10;
	int b = 20;
	char c = 'c';
	cout << add(a, c) << endl;//普通函数的调用可以发生隐式转换。即把c的值转换ascii值为int 来相加。
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
	//利用函数自动推导来调用模板函数
	//add02(a, c);//会报错利用自动推导不可以传入不同类型的数据给模板

	//利用指定参数类型来调用函数模板
	int k=add02<int>(a, c);//可以调用函数模板成功，发生隐式转换。
	cout << k << endl;
}
int main()
{
	test01();
	test02();
	system("pause");
	return 0;
}