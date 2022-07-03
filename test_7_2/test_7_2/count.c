//使用函数指针来实现计算器
#include<stdio.h>

void menu()
{
	printf("************************\n");
	printf("*****1.加      2.减*****\n");
	printf("*****3.乘      4.除*****\n");
	printf("****     0.退出     ****\n");
	printf("************************\n");
}
int Add(int x, int y)
{
	return x + y;
}
int Sub(int x, int y)
{
	return x - y;
}
int Mul(int x, int y)
{
	return x * y;
}
int Div(int x, int y)
{
	return x / y;
}
void calc(int(*pf)(int, int))//回调函数
{
	int x = 0;
	int y = 0;
	int ret = 0;
	printf("请输入两个操作数");
	scanf_s("%d %d", &x, &y);
	ret = pf(x, y);
	printf("结果为：%d\n", ret);
}

int main()
{
	int k = 0;
	int x = 0;
	int y = 0;
	int ret = 0;
	do
	{
		menu();
		printf("请选择：");
		scanf_s("%d", &k);
		switch (k)
		{
		case 1:
			printf("请输入两个操作数");
			scanf_s("%d %d", &x, &y);
			ret = Add(x, y);
			printf("结果为：%d\n", ret);
			break;
		case 2:
			printf("请输入两个操作数");
			scanf_s("%d %d", &x, &y);
			ret = Sub(x, y);
			printf("结果为：%d\n", ret);
			break;
		case 3:
			printf("请输入两个操作数");
			scanf_s("%d %d", &x, &y);
			ret = Mul(x, y);
			printf("结果为：%d\n", ret);
			break;
		case 4:
			printf("请输入两个操作数");
			scanf_s("%d %d", &x, &y);
			ret = Div(x, y);
			printf("结果为：%d\n", ret);
			break;
		default:
			printf("输入错误\n");
			break;
		}
	} while (k);
	return 0;
}
*/
/*
int main()
{
	int k = 0;
	do
	{
		menu();
		printf("请选择：");
		scanf_s("%d", &k);
		switch (k)
		{
		case 1:
			calc(Add);
			break;
		case 2:
			calc(Sub);
			break;
		case 3:
			calc(Mul);
			break;
		case 4:
			calc(Div);
			break;
		default:
			printf("输入错误\n");
			break;
		}
	} while (k);
	return 0;
}
*/
/*int main()//在优化
{
	//存放函数指针的数组 函数数组
	int(*arr[])(int, int) = { 0,Add,Sub,Mul,Div };
	int k = 0;
	int x = 0;
	int y = 0;
	do
	{
		menu();
		printf("请选择：");
		scanf_s("%d", &k);
		if (k == 0)
		{
			printf("退出计算器");
			break;
		}
		else if (k >= 1 && k <= 4)
		{
			printf("请输入两个操作数:");
			scanf_s("%d %d", &x, &y);
			int ret = arr[k](x, y);
			printf("%d\n", ret);
		}
		else
		{
			printf("输入错误\n");
		}

	} while (k);
	return 0;
}
*/