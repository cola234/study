#include <stdio.h>
//void test(int arr[3][5])
//{
//
//}
//void test1(int arr[][5])
//{
//
//}
//void test2(int arr[3][])//error
//{
//
//}
//void test3(int (*arr)[5])//二维数组传参 这里是一个指针指向有五个元素的数组 也就是二维数组的第一行 也即是二维数组的第一个元素 可以通过这个找到整个数组
//{
//
//}
//int Add(int x, int y)
//{
//	return x + y;
//}
//int main()
//{
//	int x = 0;
//	int y = 10;
//	int arr[3][5] = { 0 };//二维数组传参
//	test(arr);
//	test1(arr);
//	test2(arr);
//	Add(x, y)
//	int(*pa)(int, int) = Add;//函数指针
//	return 0;
//	//例子：函数指针 类型 （*变量名）（函数参数类型）
//}
//函数 的地址 1.函数名 2.&函数名 两者等价 都是函数的地址 

//void Print(char* str)
//{
//	printf("%s\n", str);
//}
//int main()
//{
//	void(*p)(char*) = Print;//函数指针
//	(*p)("hello world");//先用*解引用 在用（）传参
//	(*  (void(*)() 0)();   //void(*)()为函数指针 用括号括起来为强制类型转换 将0强制类型转换为函数地址
//	//然后在给他传空参，相当于调用0地址处的函数
//	void(*signal(int, void(*)(int)))(int);
//	return 0;
//}
//int Add(int x, int y)
//{
//	return x + y;
//}
//int Sub(int x, int y)
//{
//	return x - y;
//}
//int Mul(int x, int y)
//{
//	return x * y;
//}
//int Div(int x, int y)
//{
//	return x / y;
//}
//int main()
//{
//	int* arr[5];
//	int(*pa)(int, int) = Add;//函数指针
//	int(*parr[4])(int, int) = { Add,Sub,Mul,Div };//函数指针数组 本质上是一个数组 用来存放函数指针 []的优先级大于* 所以parr先跟[]结合在跟*结合
//	for (int i = 0; i < 4; i++)
//	{
//		printf("%d", parr[i](2, 3));//这里parr已经是地址了 不用加*号  *号后面必须是地址
//	}
//	return 0;
//}

char* my_strcpy(char* dest, const char* src)
//1.写一个函数指针pf 指向my_strcpy
//2.写一个函数指针数组 存放4个my_strcpy
{
	;
}

int main()
{
	char* (*pf)(char*, const char*)=my_strcpy;//函数指针pf
	char* (*parr[4])(char*, const char*) = { my_strcpy,my_strcpy,my_strcpy,my_strcpy };//函数指针p
	printf("%s", parr[1]);
	return 0;
}