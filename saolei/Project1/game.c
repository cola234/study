//游戏的实现
#include "game1.h"
void InitBoard(char Board[ROWS][COLS], int rows, int cols,char set)//这里是形参 形参和实参的名字不一定要一致
{
	for (int i = 0; i < rows; i++)
	{
		for (int j = 0; j < cols; j++)
		{
			Board[i][j] = set;
		}
	}
}
void DisplayBoard(char Board[ROWS][COLS], int row, int col)//打印9x9而不是11x11
{
	for (int i = 0; i <= row; i++)
	{
		printf("%d ", i);
	}
	printf("\n");
	for(int i = 1; i <= row; i++)
	{
		printf("%d ", i);
		for (int j = 1; j <= col; j++) 
		{
			printf("%c ", Board[i][j]);
		}
		printf("\n");
	}
}
void Setmine(char Board[ROWS][COLS], int row, int col)
{
	int count = Easy_count;
	while (count)
	{
		int x = rand() % row + 1;//这里使用了rand函数 生成随机数 要引头文件和设置时间戳 设置时间戳用srand((unsigned int)time(NULL))
		int y = rand() % col + 1;
		if(Board[x][y] == '0')
		{ 
			Board[x][y] = '1';
		    count--;
	     }
	}
}
int get_mine_count(char mine[ROWS][COLS], int x, int y)//计算雷的数量
{
	return  mine[x - 1][y] + 
		    mine[x - 1][y - 1] + 
		    mine[x - 1][y + 1] + 
		    mine[x][y - 1] + 
		    mine[x][y + 1] + 
		    mine[x + 1][y - 1] + 
	        mine[x + 1][y + 1]+
        	mine[x + 1][y] - 8 * '0';
}
int Judge(char show[ROWS][COLS],char mine[ROWS][COLS], int x, int y,int *win)
{
	//for (int i =-1; i < 2; i++)
	//{
	//	for (int j=-1; j < 2; j++)
	//	{
	//		int a = get_mine_count(mine, x + i, y + i);//每次循环调用一次判断函数，并将结果放到a里
	//		if (a == 0)//如果a为0
	//		{
	//			Clear(mine,show, x + i, y + i,row,col);//再次清空周围的9个
	//			Judge(show,mine, x + i, y + i,row,col);//再次进入判断函数
	//		}
	//		else//如果a不为0
	//		{
	//			show[x+i][y+i] = a + '0';
	//		}
	//	}
	//}
	//1.判断
	if (show[x][y] == '*')
	{
		*win += 1;
		int count = get_mine_count(mine, x, y);
		if (count == 0)//如果周围一圈没雷，开始递归
		{
			show[x][y] = ' ';//先标记已经扫过的地方 变为空格
				if (((x - 1) >= 1) && ((x - 1) <= 9) && ((y - 1) >= 1) && ((y - 1) <= 9))
					Judge(show, mine, x - 1, y - 1, win);
			if (((x - 1) >= 1) && ((x - 1) <= 9) && ((y) >= 1) && ((y) <= 9))
				Judge(show, mine, x - 1, y, win);
				if (((x - 1) >= 1) && ((x - 1) <= 9) && ((y + 1) >= 1) && ((y + 1) <= 9))
					Judge(show, mine, x - 1, y+1, win);
					if (((x) >= 1) && ((x) <= 9) && ((y - 1) >= 1) && ((y - 1) <= 9))
						Judge(show, mine, x, y - 1, win);
						if (((x) >= 1) && ((x) <= 9) && ((y + 1) >= 1) && ((y + 1) <= 9))
							Judge(show, mine, x, y + 1, win);
						if (((x+1) >= 1) && ((x+1) <= 9) && ((y - 1) >= 1) && ((y - 1) <= 9))
							Judge(show, mine, x+1, y - 1, win);
						if (((x + 1) >= 1) && ((x + 1) <= 9) && ((y) >= 1) && ((y) <= 9))
							Judge(show, mine, x + 1, y, win);
						if (((x + 1) >= 1) && ((x + 1) <= 9) && ((y+1) >= 1) && ((y+1) <= 9))
							Judge(show, mine, x + 1, y+1, win);
		}
		else
		{
			show[x][y] = count + '0';
			return;
		}
	}

}
void Clear(char mine[ROWS][COLS],char show[ROWS][COLS], int x, int y,int row,int col)//大范围清空 这里的row和col为11x11
{
	show[x - 1][y] = '0', show[x - 1][y - 1] = '0', show[x - 1][y + 1] = '0', show[x][y - 1] ='0', show[x][y + 1] = '0',show[x+1][y - 1] = '0',show[x + 1][y + 1] = '0',show[x + 1][y] = '0';
	//2.在依次判断周围坐标 有几个雷 使用递归思想
	//get_mine_count(show, x - 1, y);
	//get_mine_count(show, x - 1, y-1);
	//get_mine_count(show, x - 1, y+1);
	//get_mine_count(show, x, y-1);
	//get_mine_count(show, x, y+1);
	//get_mine_count(show, x + 1, y-1);
	//get_mine_count(show, x + 1, y+1);
	//get_mine_count(show, x + 1, y);
	//要判读的是 mine数组里类的个数 然后放到show数组里 创建一个新的函数操作mine，然后最后返回的结果放到show里

}
void Findmine(char mine[ROWS][COLS], char show[ROWS][COLS], int row, int col)//扫雷
{
	int win = 0;//游戏成功的判断参数
	//1.输入雷的坐标（0~9）
	while (win<col*row-Easy_count)
	{
		int x = 0;
		int y = 0;
		printf("请输入雷的坐标");
		scanf_s("%d%d", &x,&y);
		if (x >= 1 && x <= 9 && y >= 1 && y <= 9)//判断坐标是否合法
		{
			if (mine[x][y] == '1')
			{
				printf("你被炸死了\n");
				DisplayBoard(mine, row, col);//打印出来
				break;
			}
			else//不是雷
			{
				//计算x y坐标周围有几个雷 再封装一个函数判断
				int count = get_mine_count(mine, x, y);//计算雷的数量 这里传入x y而不是ROW COL的原因是 二维数组已经全部传入函数 xy仅作为操作数
				if (count == 0)//如果周围一圈没雷
				{
					Judge(show, mine, x, y,&win);//递归函数  要操作两个数组 传入两个
					DisplayBoard(show, row, col);
				}
			}

		}
		else
		{
			printf("坐标非法请重新输入\n");
		}
		if (win == col * row - Easy_count)
		{
			printf("恭喜你 排雷成功！\n");
			DisplayBoard(mine, row, col);
			break;
		}
	}
}