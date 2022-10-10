#include<iostream>
using namespace std;
//1.若普通函数和函数模板都能调用，优先调用普通函数
//2.若想强制调用函数模板可使用空模板参数列表来调用
//3.函数模板也可以发生重载
//4.如果函数模板可以发生更好的匹配，优先调用函数模板
void myfunc(int a, int b)
{
	cout << "普通函数的调用" << endl;
}
template<typename T>
void myfunc(T a, T b)
{
	cout << "函数模板的调用" << endl;
}
template<typename T>
void myfunc(T a, T b, T c)
{
	cout << "函数模板重载的调用" << endl;
}


int main()
{
	myfunc(10, 20);//普通函数和函数模板都能调用的时候优先调用普通函数
	myfunc<>(10,20);//若想强制调用函数模板可使用空模板参数列表来调用
	myfunc<>(10,20,30);//函数模板也可以发生重载
	myfunc(10, 20, 30);
	myfunc('a', 'c');//会优先调用函数模板
	system("pause");
	return 0;
}