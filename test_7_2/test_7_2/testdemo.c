#include<stdio.h>


//typedef  void(*pf_t) (int);//函数重命名 将void(*) (int)命名为pf_t
////重命名过后 刚才那个函数就可以写成pf_t signal(int pf_t)
//int main()
//{
//	(*(void(*)() )0 )();//*(函数指针)0
//	/*
//	(函数指针)0表示强制类型转换 将0强转为函数指针类型 也就是
//	地址  可以写成(*函数地址)()本质上是一次函数调用
//	*/
//	void(  *signal(  int, void(*)(int)  ) )(int);
//	//int add(int int)
//	//void(*函数(int,函数指针))(int)
//	/*signal(int, void(*(int)) ) 也就是signal(int,函数指针) 这是一个函数声明
//	而函数的参数知道了 如何知道函数的返回类型 去掉这个部分 剩下的是void(* 函数声明)（int）
//	可以得知 这是一个返回类型为函数指针的一个函数signal 该函数指针的返回类型是void 参数是int 而他声明的函数signal参数1是int 参数2是函数指针，参数2中的函数
//	指针指向的参数是int 返回类型是void*/
//	return 0;
//}
/*int main()
{
	//函数指针数组
	int(*arr[])(int, int) = { 0 };
	//指向函数数组的指针
	int(*(*parr)[])(int, int)=&arr;//arr首先和*结合在和[]结合
	return 0;
}*/