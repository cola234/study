#define _CRT_SECURE_NO_WARINGS 1
#include <stdio.h>

//int Add(int x,int y)
//{
//	return x + y;
//}
//int main()
//{
//	int(*pAdd)(int, int) = Add;
//	int ret = (*pAdd)(1, 2);
//	printf("%d", ret);
//	return 0;
//}

//void bubble_sort(int arr[], int sz)
//{
//	int i = 0;
//	for (i = 0; i < sz - 1; i++)
//	{
//		for (int j = 0; j < sz - 1 - i; j++)
//		{
//			if (arr[j] < arr[j + 1])
//			{
//				int tmp = arr[j + 1];
//				arr[j + 1] = arr[j];
//				arr[j + 1] = tmp;
//			}
//		}
//	}
//}
//int main()//ð������
//{
//	int arr[] = { 0,1,2,3,4,5,6,7,8,9 };
//	int sz = sizeof(arr) / sizeof(arr[0]);
//	bubble_sort(arr, sz);
//	for (int i = 0; i < sz; i++)
//	{
//		printf("%d ", arr[i]);
//	}
//}

//void*���ͣ����Խ����������͵ĵ�ַ
//���ܽ����� Ҳ���ܽ���+-*/�Ĳ���
struct stu
{
	char name[20];
	int age;
};
//void qsort(void *base,
//		size_t num.
//		size_t width,
//		int(*cmp)(const void *e1, const void *e2)
//		);
int cmp_int(const void* e1, const void*e2)
{
	return *(int*)e1 - *(int*)e2;//��void ǿ������ת��Ϊint����

	//�����Ƚ���������ֵ
}
int cmp_float(const void* e1, const void*e2)
{
	//if (*(float*)e1 == *(float*)e2)
	//{
	//	return 0;
	//}
	//else if (*(float*)e1 > *(float*)e2)
	//{
	//	return 1;
	//}
	//else
	//{
	//	return -1;
	//}
	return ((int)(*(float*)e1 - *(float*)e2));
}
//void test1()
//{
//	//int(*pArr[5])(int, int);//��ź���ָ�������
//    //int(*(*ppArr)[5])(int, int);//��ź���ָ�������ָ��
//	int arr[10] = { 9,8,7,6,5,4,3,2,1,0 };
//	int sz = sizeof(arr) / sizeof(arr[0]);
//	qsort(arr, sz, sizeof(arr[0]), cmp_float);//�⺯��
//	for (int i = 0; i < sz; i++)
//	{
//		printf("%d ", arr[i]);
//	}
//}

void test2()
{
	float f[] = { 9.0, 8.0, 7.0, 6.0 ,5.0 ,4.0 };
	int sz = sizeof(f) / sizeof(f[0]);
	qsort(f, sz, sizeof(f[0]), cmp_float);
	for (int i = 0; i < sz; i++) 
	{
		printf("%f ", f[i]);
	}
}

//Ŀ��������ʼλ�� Ԫ�س��� Ԫ�ش�С�ֽ� �ȽϺ���
int main()
{
	//int(*pArr[5])(int, int);//��ź���ָ�������
	//int(*(*ppArr)[5])(int, int);//��ź���ָ�������ָ��
	test2();
}