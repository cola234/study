//��Ϸ��ʵ��
#include "game1.h"
void InitBoard(char Board[ROWS][COLS], int rows, int cols,char set)//�������β� �βκ�ʵ�ε����ֲ�һ��Ҫһ��
{
	for (int i = 0; i < rows; i++)
	{
		for (int j = 0; j < cols; j++)
		{
			Board[i][j] = set;
		}
	}
}
void DisplayBoard(char Board[ROWS][COLS], int row, int col)//��ӡ9x9������11x11
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
		int x = rand() % row + 1;//����ʹ����rand���� ��������� Ҫ��ͷ�ļ�������ʱ��� ����ʱ�����srand((unsigned int)time(NULL))
		int y = rand() % col + 1;
		if(Board[x][y] == '0')
		{ 
			Board[x][y] = '1';
		    count--;
	     }
	}
}
int get_mine_count(char mine[ROWS][COLS], int x, int y)//�����׵�����
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
	//		int a = get_mine_count(mine, x + i, y + i);//ÿ��ѭ������һ���жϺ�������������ŵ�a��
	//		if (a == 0)//���aΪ0
	//		{
	//			Clear(mine,show, x + i, y + i,row,col);//�ٴ������Χ��9��
	//			Judge(show,mine, x + i, y + i,row,col);//�ٴν����жϺ���
	//		}
	//		else//���a��Ϊ0
	//		{
	//			show[x+i][y+i] = a + '0';
	//		}
	//	}
	//}
	//1.�ж�
	if (show[x][y] == '*')
	{
		*win += 1;
		int count = get_mine_count(mine, x, y);
		if (count == 0)//�����ΧһȦû�ף���ʼ�ݹ�
		{
			show[x][y] = ' ';//�ȱ���Ѿ�ɨ���ĵط� ��Ϊ�ո�
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
void Clear(char mine[ROWS][COLS],char show[ROWS][COLS], int x, int y,int row,int col)//��Χ��� �����row��colΪ11x11
{
	show[x - 1][y] = '0', show[x - 1][y - 1] = '0', show[x - 1][y + 1] = '0', show[x][y - 1] ='0', show[x][y + 1] = '0',show[x+1][y - 1] = '0',show[x + 1][y + 1] = '0',show[x + 1][y] = '0';
	//2.�������ж���Χ���� �м����� ʹ�õݹ�˼��
	//get_mine_count(show, x - 1, y);
	//get_mine_count(show, x - 1, y-1);
	//get_mine_count(show, x - 1, y+1);
	//get_mine_count(show, x, y-1);
	//get_mine_count(show, x, y+1);
	//get_mine_count(show, x + 1, y-1);
	//get_mine_count(show, x + 1, y+1);
	//get_mine_count(show, x + 1, y);
	//Ҫ�ж����� mine��������ĸ��� Ȼ��ŵ�show������ ����һ���µĺ�������mine��Ȼ����󷵻صĽ���ŵ�show��

}
void Findmine(char mine[ROWS][COLS], char show[ROWS][COLS], int row, int col)//ɨ��
{
	int win = 0;//��Ϸ�ɹ����жϲ���
	//1.�����׵����꣨0~9��
	while (win<col*row-Easy_count)
	{
		int x = 0;
		int y = 0;
		printf("�������׵�����");
		scanf_s("%d%d", &x,&y);
		if (x >= 1 && x <= 9 && y >= 1 && y <= 9)//�ж������Ƿ�Ϸ�
		{
			if (mine[x][y] == '1')
			{
				printf("�㱻ը����\n");
				DisplayBoard(mine, row, col);//��ӡ����
				break;
			}
			else//������
			{
				//����x y������Χ�м����� �ٷ�װһ�������ж�
				int count = get_mine_count(mine, x, y);//�����׵����� ���ﴫ��x y������ROW COL��ԭ���� ��ά�����Ѿ�ȫ�����뺯�� xy����Ϊ������
				if (count == 0)//�����ΧһȦû��
				{
					Judge(show, mine, x, y,&win);//�ݹ麯��  Ҫ������������ ��������
					DisplayBoard(show, row, col);
				}
			}

		}
		else
		{
			printf("����Ƿ�����������\n");
		}
		if (win == col * row - Easy_count)
		{
			printf("��ϲ�� ���׳ɹ���\n");
			DisplayBoard(mine, row, col);
			break;
		}
	}
}