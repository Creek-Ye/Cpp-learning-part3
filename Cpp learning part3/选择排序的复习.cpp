#include<iostream>
using namespace std;
#include<iomanip>

void sort(int* array, int len)
{
	for (int i = 0; i < len; i++)
	{
		int maxormin = i;
		//要升序
		for (int j = i + 1; j < len; j++)
		{
			if (array[maxormin] > array[j])
			{
				maxormin = j;
			}
		}
		//找到最小值所对应的下标后交换
		if (i != maxormin)
		{
			int temp = array[maxormin];
			array[maxormin] = array[i];
			array[i] = temp;
		}

	}
}

void test01()
{
	int array[] = { 1,7,0,8,5 };
	int len = sizeof(array) / sizeof(array[0]);
	sort(array, len);
	for (int i = 0; i < len; i++)
	{
		cout <<left<<setw(5)<< array[i];
	}
}




int main()
{
	test01();
	system("pause");
	return 0;
}
