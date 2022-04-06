#define _CRT_SECURE_NO_WARINGS 1
#include<stdio.h>

/*类型的意义
1.使用这个类型开辟内存空间的大小
2.如何看待内存空间的视角*/

/*整数在内存中存的是二进制位的补码
而在调试中内存是以16进制位展示
前面会加一个0x */
/*int main()
{
	int a = 20//一个整形是4个字节-32个比特 正数的原反补一样
		//0000 0000 0000 0000 0000 0000 0000 0001 0100//32个bit位
		// 0x00000014 内存地址
	int b = -10
		//1000 0000 0000 0000 0000 0000 0000 0000 1010 原码
		//1111 1111 1111 1111 1111 1111 1111 1111 0101 反码
		//1111 1111 1111 1111 1111 1111 1111 1111 0110 补码
		//0xffffffff6
	return 0;
}*/
//小端存储 顺序排 即高位在低地址
//大端存储 逆序排 高位在高地址

//int check_sys(void)
//{
//	int a = 1;//0000 0000 0000 0000 0000 0000 0000 0001 0x00 00 00 01 
//	char* p = (char*)&a;//把a的地址强制转换为char*
//	return *p//如果首位为1 说明逆着排 为小端   char*只占一个字节
//}
//int main()//判断当前机器的字节序 封装成函数
//{
//	//int a = 1;//0000 0000 0000 0000 0000 0000 0000 0001 0x00 00 00 01 
//	//char* p = (char*)&a;//把a的地址强制转换为char*
//	//if (*p == 1)//如果首位为1 说明逆着排 为小端
//	//{
//	//	printf("小端\n");
//	//}
//	//else
//	//{
//	//	printf("大端\n");
//	//}
//	int ret = check_sys();
//	if (ret == 1)
//	{
//		printf("小端");
//	}
//	else
//	{
//		printf("大端");
//	}
//	return 0;
//}

int main()
{
	char a = -1;//11111111
	signed char b = -1;//11111111
	unsigned char c = -1;//11111111
	printf("%d %d %d\n", a, b, c);
	char d = -128;//10000000000000000000000 100000000 ->111111111111111111111111 01111111 ->111111111111111111111111 10000000
	printf("%u",d);
	//-1 -1 255
	//这里发生了整形提升
	/*-1的补码为全1 1000 0000 0000 0000 0000 0000 0000 0000 -> 由于char只能存放1个字节 而1为整形为4个字节
	所以存高位的8个字节
	printf要打印整形，char要整形提升成整形 高位补0/1 如果符号位为1 补1 符号位为0补0 无符号数补0
	a就变成了 11111111111111111111111111111111
	b变成11111111111111111111111111111111
	c变成00000000000000000000000011111111 由于c是无符号数 原码反码补码相同 打印出来为255
	*/return 0;
}