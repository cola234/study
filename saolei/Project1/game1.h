//函数的声明
#define ROW 9//ROW=行 COL=列
#define COL 9
#define ROWS ROW+2
#define COLS COL+2
#define Easy_count 10
#include<stdio.h>
#include<stdlib.h>
#include<time.h>

void InitBoard(char Board[ROWS][COLS], int rows, int cols,char set);//先声明在实现
void DisplayBoard(char Board[ROWS][COLS], int row, int col);
void Setmine(char Board[ROWS][COLS], int row, int col);
void Findmine(char mine[ROWS][COLS], char show[ROWS][COLS], int row, int col);//扫雷
void Clear(char mine[ROWS][COLS], int x, int y);
/*功能：一点点一片
思路：随机点一个雷，如果周围一圈都不是雷，开启连锁反应，在依次判断周围一圈的附近有没有雷，将没有雷的地方全部排除
1.输入一个坐标，如果周围一圈没有雷。清空这一圈9个
2.将这周围8个坐标的周围雷数依次显示
3.如果周围8个坐标其中的坐标的周围8个还没有雷，再次重复（递归）*/