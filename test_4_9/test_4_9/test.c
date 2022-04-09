#include <stdio.h>

int main()//指针进阶
{
	char *p = "abcdef";//用""引起来的字符串是常量字符串 这里是把a的地址（首元素）赋给了p
		printf("%s", p);
		int a = 10;
		int b = 20;
		int c = 30;
		int d = 40;
		int* arr[4] = { &a,&b,&c,&d };//指针数组：用于存放地址的数组
		int arr1[] = { 1,2,3,4,5 };
		int arr2[] = { 2,3,4,5,6 };
		int arr3[] = { 3,4,5,6,7 };
		int* parr[] = { arr1,arr2,arr3 };
		int i,j;
		for (i = 0; i < 3; i++)
		{
			for (j = 0; j < 5; j++)
			{
				printf("%d",*(parr[i] + j));
			}
			printf("\n");
		}
	return 0;
}