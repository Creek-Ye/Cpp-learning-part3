#include<iostream>
using namespace std;
#include<iomanip>
//��һ��swap������ģ��
template<typename T>
void swap01(T& a, T& b)
{
	T temp = a;
	a = b;
	b = temp;
}

template<typename T>
//��ѡ����������һ��ģ��
void selected_sort(T *array,int len)
{
	for (int i = 0; i < len; i++)
	{
		int maxormin = i;//����������Сΰi
		for (int j = i+1; j < len; j++)
		{
			if (array[maxormin] > array[j])
			{
				maxormin = j;
			}
		}
		//�ҳ���С���±�󽻻��������������±������
		if (maxormin != i)
		{
			//����swap01������ʵ�ֽ����������±�����Ӧ������
			swap01(array[i], array[maxormin]);

		}
	}
}
//��һ����ӡ������ģ��
template<typename T>
void printf(T* array, int len)
{
	for (int i = 0; i < len; i++)
	{
		cout << left << setw(5) << array[i];
	}
}
//�ַ�����char���������
void test01()
{
	char chararray[] = "acbdfg";
	int len = sizeof(chararray) / sizeof(chararray[0]);
	//����ģ��ѡ��������
	selected_sort<char>(chararray, len);
	//Ҫ����ٵ��ô�ӡ����
	printf<char>(chararray, len);
}

//double�͵��������
void test02()
{
	double doublearray[] = {1.2,3.4,3.9,5.6,7.9,8.6};
	int len = sizeof(doublearray) / sizeof(doublearray[0]);
	//����ģ��ѡ��������
	selected_sort<double>(doublearray, len);
	//Ҫ����ٵ��ô�ӡ����
	printf<double>(doublearray, len);
}
int main()
{
	test01();
	test02();
	

	system("pause");
	return 0;
}