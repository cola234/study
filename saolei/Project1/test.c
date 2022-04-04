///测试游戏
//第一步：打印一个游戏菜单 用函数实现
#include <stdio.h>
#include "game1.h"

void menu()
{
	int a = 0;
	printf("*********************************************\n");
	printf("*****************1.play 0.exit***************\n");
	printf("******是否开始游戏1.开始游戏 0.结束游戏******\n");
}
/*游戏的实现思路
1.电脑内部一个棋盘，外部一个棋盘
内部放的是雷的信息，因为玩家交互会显示雷的数量，而雷的数量与雷的标识符可能会互相冲突，所以外部再放一个棋盘，外部棋盘显示给玩家，外部棋盘只显示从一棋盘扫雷扫出的数据
内外两个棋盘。
*/
void game()
{
	char mine[ROWS][COLS] = { 0 };//内部
	char show[ROWS][COLS] = { 0 };//外部
	InitBoard(mine, ROWS, COLS, '0');//函数的初始化 把要初始化的内容传入进去
	InitBoard(show, ROWS, COLS, '*'); 
	DisplayBoard(show, ROW, COL);//打印棋盘
	Setmine(mine, ROW, COL); //设置雷
	//DisplayBoard(mine, ROW, COL);//打印棋盘 语法规定：数组设置的是怎么样的 形参和实参的定义就必须是与设置的数组一致
	Findmine(mine, show, ROW, COL);//扫雷 要同时操作两个棋盘,实际操作的数是9x9 数组越界
}
void test()
{
	int a = 0;
	srand((unsigned int)time(NULL));//设置时间戳
	do
   {  
	menu();//打印主菜单
	printf("请选择:>");
	scanf_s("%d", &a);
		switch (a)
		{
		case 1:
			printf("开始游戏\n");
			game();//游戏的主要函数
			break;
		case 0:
			printf("退出游戏\n");
			break;
		default:
			printf("输入错误，请重新选择\n");
			break;
		}
	} while (a);//如果a为1 开始游戏后结束 跳出循环再次进入 a为真 为0 while判断为假 跳出 为非0 也为真 再次进入
}
int main()
{   
	test();
	return 0;
}