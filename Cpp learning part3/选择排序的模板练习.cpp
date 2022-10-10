#include<iostream>
using namespace std;
#include<iomanip>
//做一个swap函数的模板
template<typename T>
void swap01(T& a, T& b)
{
	T temp = a;
	a = b;
	b = temp;
}

template<typename T>
//给选择排序函数做一个模板
void selected_sort(T *array,int len)
{
	for (int i = 0; i < len; i++)
	{
		int maxormin = i;//假设最大或最小伟i
		for (int j = i+1; j < len; j++)
		{
			if (array[maxormin] > array[j])
			{
				maxormin = j;
			}
		}
		//找出最小的下标后交换数组中这两个下标的数据
		if (maxormin != i)
		{
			//调用swap01函数来实现交换这两个下标所对应的数据
			swap01(array[i], array[maxormin]);

		}
	}
}
//做一个打印函数的模板
template<typename T>
void printf(T* array, int len)
{
	for (int i = 0; i < len; i++)
	{
		cout << left << setw(5) << array[i];
	}
}
//字符类型char的数组测试
void test01()
{
	char chararray[] = "acbdfg";
	int len = sizeof(chararray) / sizeof(chararray[0]);
	//调用模板选择排序函数
	selected_sort<char>(chararray, len);
	//要输出再调用打印函数
	printf<char>(chararray, len);
}

//double型的数组测试
void test02()
{
	double doublearray[] = {1.2,3.4,3.9,5.6,7.9,8.6};
	int len = sizeof(doublearray) / sizeof(doublearray[0]);
	//调用模板选择排序函数
	selected_sort<double>(doublearray, len);
	//要输出再调用打印函数
	printf<double>(doublearray, len);
}
int main()
{
	test01();
	test02();
	

	system("pause");
	return 0;
}