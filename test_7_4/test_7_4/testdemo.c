#include<stdio.h>

/*int main()
{
	int n = 0;
	int i = 0;
	int j = 0;
	int count = 0;
	int arr[50];
	scanf_s("%d", &n);
	for (i = 0; i < n; i++)//赋值
	{
		scanf_s("%d", &arr[i]);
	}
	for (j = 0; j < n - 1; j++)
	{
	  if (arr[j] > arr[j + 1])
		{
		  count++;
		}
	  else if (arr[j] < arr[j + 1])
	  {
		  count--;
	  }
	  else
	  {
		  break;
	  }
	}
	if (count == n-1 || count == 1-n)
	{
		printf("sorted");
	}
	else
	{
		printf("unsorted");
	}
	return 0;
}
*/
//指针面试题

//int main()
//{
//	int a[5] = { 1, 2, 3, 4, 5 };
//	int *ptr = (int *)(&a + 1);
//	printf("%d,%d", *(a + 1), *(ptr - 1));
//	return 0;
//}
//程序的结果是什么？2 5
/*
&a为a数组的地址数组地址+1 为5后面的地址 ptr-1为5的地址
a+1为首元素地址+1是2的地址
*/
//
//struct Test
//{
//	int Num;
//	char *pcName;
//	short sDate;
//	char cha[2];
//	short sBa[4];
//}*p = (struct Test*)0x100000;//结构体指针
////假设p 的值为0x10 00 00。 如下表表达式的值分别为多少？
////已知，结构体Test类型的变量大小是20个字节
//int main()
//{
//	printf("%p\n", p + 0x1);
//	//0x100000+20 = 0x100014 结构体指针整体+1跳过一个结构体
//	printf("%p\n", (unsigned long)p + 0x1);
//	//把P强转为无符号长整形0x100000变成整形在加上一个1在变为16进制
//	printf("%p\n", (unsigned int*)p + 0x1);
//	//将p强转为一个无符号整形指针+1 相当于一个无符号整形指针跳过一个整形的大小
//	//也就是+4 变成0x100004
//	return 0;
//}

//int main()//第三题 %x以十六进制输出
//{
//	int a[4] = { 1, 2, 3, 4 };
//	int *ptr1 = (int *)(&a + 1);//
//	int *ptr2 = (int *)((int)a + 1);//地址强转为int+1在变成地址
//	//如果当前机器是小端存储 1 2 3 4在内存中的存储方式就是
//	//01 00 00 00 02 00 00 00 03 00 00 00 04 00 00 00
//	//假设a的地址是0x0012ff40 强转为int变成一个整数 在+1 在转为地址
//	//则变为0x0012ff41 和a+1的区别在于 a+1跳过的是4个字节 这里跳过的是一个字节
//	//所以ptr2取出来的16进制的地址就是02 00 00 00 这里是小端存储所以反着拿出来
//	//结果就是0x02000000 省略掉前面的0 变成2000000
//	printf("%x,%x", ptr1[-1], *ptr2);
//	//ptr1[-1]相当于*(ptr-1)
//	return 0;
//}

//第四题
//int main()
//{
//	int a[3][2] = { (0, 1), (2, 3), (4, 5) };//逗号表达式，只读后面
//	int *p;
//	p = a[0];
//	//a[i]表示第i行首元素地址 a表示第0行的地址 a+i表示第i行的地址
//	//所以这里的a[0]表示为1的地址
//	printf("%d", p[0]);//*p
//	return 0;
//}

//int main()
//{
//	int a[5][5];
//	int(*p)[4];//数组指针 类型为int 大小为4
//	p = a;//a表示为第一行的地址
//	printf("%p,%d\n", &p[4][2] - &a[4][2], &p[4][2] - &a[4][2]);//&(*(*(p+4)+2))
//	//见画图板
//
//	return 0;
//}
//
/*
arr
a
&a
a[0]
a[0][0]
分别代表什么 在一维数组和二维数组中
*/
//int main()//第六题
//{
//	int aa[2][5] = { 1, 2, 3, 4, 5, 6, 7, 8, 9, 10 };
//	int *ptr1 = (int *)(&aa + 1);
//	int *ptr2 = (int *)(*(aa + 1));
//	printf("%d,%d", *(ptr1 - 1), *(ptr2 - 1));//10 
//	return 0;
//}
//
//int main()//第七题
//{
//	char *a[] = { "work","at","alibaba" };
//	char**pa = a;//二级指针 a指向的是w的地址
//	pa++;//pa是at的地址
//	printf("%s\n", *pa);//
//	return 0;
//}

int main()//第八题
{
	char *c[] = { "ENTER","NEW","POINT","FIRST" };
	char**cp[] = { c + 3,c + 2,c + 1,c };
	char***cpp = cp;
	printf("%s\n", **++cpp);//POINT
	printf("%s\n", *--*++cpp + 3);//ER
	printf("%s\n", *cpp[-2] + 3);//ST
	printf("%s\n", cpp[-1][-1] + 1);//EW
	return 0;
}

