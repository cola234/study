#include<stdio.h>
//int main()
//{
//	double arr[10] = {};
//	int i,x=0;
//	for (i = 0; i <= 10; i++)
//	{
//		arr[i] = 0.1+x;
//		x = x + i;//x 0 1 30
//	}
//	return 0;
//}
//int main()
//{
//	char arr[25] = {};
//	int b = 65;
//	int a = 98;
//	int i = 0;
//	for (i = 0; i <= 25; i++)
//	{
//		if (i % 2 == 0)//如果i的余数不为0 是大写
//		{
//			arr[i] = b;
//			b += 2;
//		}
//		else
//		{
//			arr[i] = a;
//			a += 2;
//		}
//	}
//	return 0;
//}
//int main()//第一题
//{
//	int arr[10] = {};//10个元素的数组
//	int z = 0,f=0,zero=0;
//	printf("请输入十个元素\n");
//	for (int i = 0; i < 10; i++)
//	{
//		scanf_s("%d", &arr[i]);
//		if (arr[i] > 0)
//		{
//			z++;
//		}
//		if (arr[i] == 0)
//		{
//			zero++;
//		}
//		else if(arr[i] < 0)
//		{
//			f++;
//		}
//	}
//	printf("正数的个数为:%d\n", z);
//	printf("负数的个数为:%d\n", f);	
//	printf("0的个数为:%d\n", zero);
//	return 0;
//}
int main()
{
	int arr[10] = {};
	int tmp;
	printf("请依次输入数组的10个元素\n");
	for (int i = 0; i < 10; i++)
	{
	   scanf_s("%d", &arr[i]);//循环赋值
	}
	for (int i = 0; i < 10; i++)//外循环1次 内循环10次
	{
		tmp = 10 - 1 - i;//10-1为下标 -1为内部循环 原理是 先打印后面的 在依次打印前面
		for (int j = 0; j < 10; j++)
		{
			printf("%d ", arr[tmp++]);//循环打印数组里的元素，先打印在自增
			if (tmp >= 10)//因为只有10个元素 数组的下标最高为9 一旦tmp的值超过9 则变为0
			{
				tmp = 0;
			}
		}
		printf("\n");
	}
}
