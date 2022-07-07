#include <stdio.h>

//void swap1(int a[5],int b[5],int sz)
//{
//	int left = 0;
//	while (left < 5)
//	{
//		int tmp = 0;
//		tmp = a[left];
//		a[left] = b[left];
//		b[left++] = tmp;
//	}
//	for (int i = 0; i < sz; i++)
//	{
//		printf("%d ", a[i]);
//	}
//	printf("\n ");
//	for (int i = 0; i < sz; i++)
//	{
//		printf("%d ", b[i]);
//	}
//}
//int main()
//{
//	int a[5] = { 1 ,2, 3, 4, 5 };
//	int b[5] = {5, 4, 3, 2, 1};
//	int sz = sizeof(a) / sizeof(a[0]);
//	swap1(a, b,sz);
//	return 0;
//}
//void swap1(int* a, int* b,int sz)//接收数组首元素的地址
//{
//	while (sz>0)
//	{
//		int tmp = 0;
//		tmp = *a;
//		*a++ = *b;
//		*b++ = tmp;
//		sz--;
//	}
//}
//int main()
//{
//	int a[5] = { 1 ,2, 3, 4, 5 };
//	int b[5] = {5, 4, 3, 2, 1};
//	int sz = sizeof(a) / sizeof(a[0]);
//	swap1(a, b,sz);
//	for (int i = 0; i < sz; i++)
//	{
//		printf("%d ", a[i]);
//	}
//	printf("\n ");
//	for (int i = 0; i < sz; i++)
//	{
//		printf("%d ", b[i]);
//	}
//	return 0;
//}
void MonthDay(int year, int yearDay, int* pMonth, int* pDay)
{
	int month1[12] = { 31,28,31,30,31,30,31,31,30,31,30,31 };
	int month2[12] = { 31,29,31,30,31,30,31,31,30,31,30,31 };
	//1.判断闰年
	if (year / 4 != 0 && year / 400 != 0)//不是闰年，有365天
	{
		int sum = 0;
		//2.计算日期
		for (int i = 1; i < *pMonth; i++)
		{
			sum += month1[i];
		}
		yearDay = sum + *pDay;
		printf("今天是当年的第%d天",yearDay);
	}
	else
	{
		int sum = 0;
		for (int i = 1; i < *pMonth; i++)
		{
			sum += month2[i];
		}
		yearDay = sum + *pDay;
		printf("今天是当年的第%d天", yearDay);
	}
}
int main()
{
	int year = 0;
	int yearDay = 0;
	int pMonth = 0;
	int pDay = 0;
	printf("请输入年份");
	scanf_s("%d", &year);
	printf("请输入月份");
	scanf_s("%d", &pMonth);
	printf("请输入是当月的几日");
	scanf_s("%d", &pDay);
	MonthDay(year,yearDay, &pMonth, &pDay);
	return 0;
}