#include <stdio.h>
#include <string.h>
#define MAX_ARR 5
//int main()
//{
//	int a[2][3] = { 1,2,3,4,5,6 };
//	printf("%d", a[1][0]);
//	return 0;
//}
/*随便给出一组数组，让他从小到大（默认）依次排序 这就是冒泡排序*/
//int main()//冒泡排序 
//{
//	int arr[MAX_ARR] = {};
//	for (int i = 0; i < MAX_ARR; i++)//循环赋值
//	{
//		scanf_s("%d", &arr[i]);
//	}
//	for (int i = 0; i < MAX_ARR - 1; i++)//结论：冒泡排序外层循环n-1次 n为元素个数
//	{
//		for (int j = 0; j < MAX_ARR - 1 - i; j++)//外层循环第一次 内层循环9次 外层第二次 内层8次 以此类推
//		{
//			if (arr[j] > arr[j + 1])
//			{
//				int t = arr[j];
//				arr[j] = arr[j + 1];
//				arr[j + 1] = t;
//			}
//		}
//	}
//	for (int j = 0; j < MAX_ARR; j++)
//	{
//		printf("%d", arr[j]);
//	}
//	return 0;
//}
//int main()//选择排序  4 5 1 2 3
//{
//	int arr[MAX_ARR] = {};
//	for (int i = 0; i < MAX_ARR; i++)//循环赋值
//	{
//		scanf_s("%d", &arr[i]);
//	}
//	for (int i = 0; i < MAX_ARR - 1; i++)//结论：选择排序外层循环n-1次 n为元素个数
//	{
//		for (int j = i+1; j < MAX_ARR; j++)//因为每次都要用第一个元素和后面的元素去比 所以j=i+1 因为每次都是排到最后 所以j<元素个数（最大下标为元素个数-1）
//		{
//			if (arr[i] > arr[j])//两个元素互换 引入新变量t
//			{
//				int t = arr[i];//把j放进t里
//				arr[i] = arr[j];//把i放进j
//				arr[j] = t;//把t放进j
//			}
//		}
//	}
//		for (int j = 0; j < MAX_ARR; j++)
//	{
//		printf("%d", arr[j]);
//	}
//	return 0;
////}
//}

/*  
void Init(int arr[], int sz)
{
	for (int i = 0; i < sz; i++)
	{
		arr[i] = 0;
	}
}
void reverse(int arr[],int sz) 作用为逆向赋值
{
	int left = 0;
	int right = sz-1;
	int tmp = 0;
	while (left<right)
	{
		tmp = arr[left];
		arr[left] = arr[right];
		arr[right] = tmp;
		left++;
		right--;
	}
}
int main()
{
	int arr[] = {1,2,4,5,8,8,3,4};
	int sz = sizeof(arr) / sizeof(arr[0]);//计算元素个数
	Init(arr, sz);
	reverse(arr,sz);
	return 0;
}
*/
//int main()
//{
//	int arr[5] = {1,2,3,4,5};
//	int arr1[5] = {5,4,3,2,1};
//	int sz = sizeof(arr) / sizeof(arr[0]);//数组元素个数
//	int left = 0;
//	int right = sz - 1;
//	for (int i = 0; i < sz; i++)
//	{
//		int tmp = arr[left];
//		arr[left] = arr1[left];
//		arr1[left] = tmp;
//		left++;
//	}
//	for (int i = 0; i < sz; i++)
//	{
//		printf("%d ", arr[i]);
//	}
//	for (int i = 0; i < sz; i++)
//	{
//		printf("%d ", arr1[i]);
//	}
//	return 0;
//}


/*知识点：原码 反码 补码
原码=最高位（符号位）+低位（数值）
0是正数 1是负数
例：7 的原码为 0000 0111 -7的原码为1000 0111
反码：正数与原码相同 负数在原码的基础上 符号位不变 其他的按位取反
例 -7的反码为 1111 1000
补码的正数与原码相同 负数是在反码的基础上+1
例 -7的补码为1111 1001*/
//int count_bit(int a)//原理 让一个数先模2 得到这个二进制位最后一位的数 在除以2 可以消掉这个数 依次循环可以得到所有位数 最后的结果为0
//{
//	int count = 0;
//	while (a)
//	{
//		if (a % 2 == 1)
//		{
//			count++;
//		}
//		a = a / 2;
//	}
//	return count;
//}
//int main()//求一个数的二进制1的个数
//{
//	int a = 13;//11111001111
//	int count = count_bit(a);
//	printf("%d", count);
//	return 0;
//}
//void arraymove(int arr[])//第一题
//{
//	int b[10] = {};
//	for (int i = 0; i < 10; i++)
//	{
//		b[i] = arr[i];
//	}
//	int x = 0;
//	scanf_s("%d", &x);
//	arr[3] = x;
//	for (int i = 4; i < 9; i++)
//	{
//		arr[i] = b[i-1];
//	}
//}
//int main()
//{
//	int a[10] = {};
//	for (int i = 0; i < 8; i++)//初始化前8个元素
//	{
//		a[i] = i;
//	}
//	arraymove(a);
//	for (int i = 0; i < 10; i++)
//	{
//		printf("%d ", a[i]);
//	}
//	return 0;
//}
//int main()//第二题
//{
//	int a = 0;
//	int count = 0;
//	int arr[40] = {};//定义了一个有x个元素的数组
//	printf("请依次输入每名学生的成绩：(输入‘111’后停止)\n");
//	while (a<=40)
//	{
//		scanf_s("%d", &arr[a]);
//		if (arr[a] < 60)
//		{
//		   count++;
//		}
//		if (arr[a] == 111)
//		{
//			break;
//		}
//		a++;
//	}
//	printf("不及格的人数为：%d",count);
//	return 0;
//}
//int Max_arr(int arr[])
//{
//	int tmp = 0;
//	for (int i = 0; i < 4; i++)
//	{
//		if (arr[i] > arr[i + 1])
//		{
//			tmp = arr[i];
//		}
//		if (arr[i] < arr[i + 1])
//		{
//			tmp = arr[i+1];
//		}
//	}
//	return tmp;
//}
//int main()//第三题
//{
//	int arr[5] = {};
//	for (int i = 0; i < 5; i++)
//	{
//		scanf_s("%d", &arr[i]);
//	}
//	int a = Max_arr(arr);
//	printf("最大值为%d", a);
//	return 0;
//}
//void max(int a[])
//{
//	int k = 0;
//	int i;
//	for (i = 0; i < 10; i++)
//	{
//		if (a[i] >= k)
//			k = a[i];
//	}
//	return k;
//}
//
//int main()
//{
//	printf("请输入10个整数：\n");
//	int a[10];
//	int i;
//	for (i = 0; i < 10; i++)
//	{
//		scanf_s("%d", &a[i]);
//	}
//
//	int c = max(a);
//	printf("最大整数%d", c);
//	return 0;
//}
//void printf(int *p, int sz)
//{
//	for (int i = 0; i < sz; i++)
//	{
//		printf("%d ", *(p + i));//(p+i)为元素地址+1 这里的p为int类型 
//	}
//}
//int main()//用指针表示地址
//{
//	int arr[] = { 1,2,3,4,5,6,7,8,9,10 };
//	int sz = sizeof(arr) / sizeof(arr[0]);
//	printf(arr, sz);
//	return 0;
//}


//int my_strlen(char *str)//传入的是数组首元素的地址
//{
//	int count = 0;//计数器
//	while (*str != '\0')
//	{
//		count++;
//		str++;
//	}
//	return count;
//}
//void reverse_string(char arr[])
//{
//	int left = 0;
//	int right = my_strlen(arr) - 1;//计算字符串长度 -1为最大下标
//	while (left<=right)
//	{
//		int tmp = 0;
//		tmp = arr[left];
//		arr[left] = arr[right];
//		arr[right] = tmp;
//		left++;
//		right--;
//	}
//}
//
//
//int main()//逆序打印字符串
//{
//	char arr[] = "abcdef";
//	reverse_string(arr);
//	printf("%s\n", arr);
//	return 0;
//}




/*1.abcdef 先把f放到a 变成fbcdef
 2.fbcdef 把f变成\n 变成fbcde 
 3.判断 字符串长度大于2 递归
 4.bcde 把e放到b 变成ecde
 5.ecd 
 6.dd
 7.d
 8.dc edc edcb fedcb fedcba
 9.*/

//输入一个非负整数，返回组成它的数字之和
//Digitsum(1729)
//Digitsum(172)+1729%10
//Digitsum(17)+172%10+1729%10
//Digitsum(1) +17%10+ 172 % 10 + 1729 % 10
//int Digitsum(unsigned int num)
//{
//	if (num > 9)
//	{
//		return Digitsum(num / 10) + num % 10;
//   }
//	else
//	{
//		return num;
//	}
//}
//int main()
//{
//	unsigned int num = 0;
//	scanf_s("%d", &num);//1729
//	int ret = Digitsum(num);
//	printf("%d", ret);
//	return 0;
//}
//
//double Pow(int n, int k)
//{
//	if (k < 0)
//		return (1.0 / (Pow(n, -k)));
//	else if (k == 0)
//		return 1;
//	else
//		return n * Pow(n, k - 1);
//}
//int main()
//{
//	int n = 0;
//	int k = 0;
//	scanf_s("%d", &n);
//	scanf_s("%d", &k);
//	double ret = Pow(n, k);
//	printf("%lf", ret);
//	return 0;
//}
//void main()
//{
//	int a[5] = { 4,6,3,23,9 };
//	int max, p, i;
//	max = a[0];
//		p = 0;
//	for (i = 1; i < 5; i++)
//		if (a[i] > max)//如果数组元素比max大 把max放到数组里
//		{
//			max = a[i];
//			p = i;
//		}
//	printf("最大值为：%d", max);
//	printf("最大值下标为：%d", p);
//}


//结构体的两种写法
//第一种：
//struct Stu
//{
//	char name[20];
//	short age;
//	char tele[100];
//	char sex[10];
//}x1,x2,x3;//全局变量
//int main()
//{
//	struct Stu s;//局部变量
//	return 0;
//}


//第二种
//typedef struct Stu//typedef的作用：给变量换个名字
//{
//	char name[20];
//	short age;
//	char tele[100];
//	char sex[10];
//}Stu1;//这里是换的名字
//int main()
//{
//	Stu1 s;//局部变量
//	return 0;
//}


//typedef struct Stu//typedef的作用：给变量换个名字
//{
//	char name[20];
//	short age;
//	char tele[12];
//	char sex[5];
//}Stu;//这里是换的名字
//
//void Print2(Stu* ps)
//{
//	printf("name:%s\n", ps->name);
//}
//
//int main()//用指针的方式打印结构体元素
//{
//	Stu s = { "张三" ,20,"15566687541","男"};//局部变量
//	Print2(&s);
//	return 0;
//}

//int main()//第一题
//{
//	char str[10]; 
//	printf("请输入字符串：");
//	scanf_s("%s", str);
//	for (int i = 0; i <= 10;i++)
//	{
//		if (str[i] >= 65 && str[i] <= 90)//A~Z
//		{
//			printf("%d ", str[i] - 64);
//		}
//		if (str[i] >=97  && str[i] <= 122)//a~z
//		{
//			printf("%d ", str[i] - 96);
//		}
//		else
//		{
//			printf("0 ");
//		}
//	}
//	return 0;
//}
//#define ROW 5
//#define COL 5
//void assign(int str[ROW][COL])//赋值
//{
//	printf("请依次给第一个5x5的矩阵赋值\n");
//	for (int i = 0; i < ROW; i++)
//{
//	for (int j = 0; j < COL; j++)
//	{
//		scanf_s("%d", &str[i][j]);
//	}
//}
//}
//void add(int str1[ROW][COL], int str2[ROW][COL], int str3[ROW][COL])//相加
//{
//	for (int i = 0; i < ROW; i++)
//	{
//		for (int j = 0; j < COL; j++)
//		{
//			str3[i][j] = str1[i][j] + str2[i][j];
//		}
//	}
//}
//int main()
//{
//	int str1[ROW][COL],str2[ROW][COL],str3[ROW][COL];
//	assign(str1);
//	assign(str2);
//	add(str1, str2, str3);
//	printf("两矩阵相加的值为：\n");
//	for (int i = 0; i < ROW; i++)
//	{
//		for (int j = 0; j < COL; j++)
//		{
//			printf("%d ",str3[i][j]);
//		}
//		printf("\n");
//	}
//	return 0;
//}

//int main()
//{
//	char arr[21];
//	printf("请输入字符串");
//	scanf_s("&s", arr);
//	for (int i = 0; i < 21 - 1; i++)//
//	{
//		for (int j = i+1; j < 21; j++)//因为每次都要用第一个元素和后面的元素去比 所以j=i+1 因为每次都是排到最后 所以j<元素个数（最大下标为元素个数-1）
//		{
//			if (arr[i] > arr[j])//两个元素互换 引入新变量t
//			{
//				int t = arr[i];//把j放进t里
//				arr[i] = arr[j];//把i放进j
//				arr[j] = t;//把t放进j
//			}
//		}
//	}
//	printf("%s",arr);
//	return 0;
//}

//
//void add(int a1[5][5], int b1[5][5])
//{
//	int i, j;
//	int c[5][5];
//
//	for (i = 0; i < 5; i++)
//	{
//		for (j = 0; j < 5; j++)
//		{
//			c[i][j] = a1[i][j] + b1[i][j];
//			printf("%d ", c[i][j]);
//		}
//	}    printf("\n");
//}
//
//int main()
//{
//	int i, j;
//	printf("请输入一个5×5的数组:\n");
//	int a[5][5];
//	for (i = 0; i < 5; i++)
//	{
//		for (j = 0; j < 5; j++)
//		{
//			int x = 0;
//			scanf_s("%d", &x);
//			a[i][j] = x;
//		}
//		printf("\n");
//	}
//
//	printf("请输入一个5×5的数组:\n");
//	int b[5][5];
//	for (i = 0; i < 5; i++)
//	{
//		for (j = 0; j < 5; j++)
//		{
//			int x = 0;
//			scanf_s("%d", &x);
//			b[i][j] = x;
//		}
//		printf("\n");
//	}
//
//	add(a, b);
//
//	return 0;
//}
void main()
{
	int *p1, *p2, *p;
	int a = 5, b = 8;
	p1 = &a; p2 = &b;
	if (a < b)
	{
		p = p1;
		p1 = p2;
		p2 = p;
	}
	printf("*p1 = %d, *p2 = %d\n", *p1, *p2);
	printf("a = %d, b = %d\n", a, b);
}