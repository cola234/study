//����������
#define ROW 9//ROW=�� COL=��
#define COL 9
#define ROWS ROW+2
#define COLS COL+2
#define Easy_count 10
#include<stdio.h>
#include<stdlib.h>
#include<time.h>

void InitBoard(char Board[ROWS][COLS], int rows, int cols,char set);//��������ʵ��
void DisplayBoard(char Board[ROWS][COLS], int row, int col);
void Setmine(char Board[ROWS][COLS], int row, int col);
void Findmine(char mine[ROWS][COLS], char show[ROWS][COLS], int row, int col);//ɨ��
void Clear(char mine[ROWS][COLS], int x, int y);
/*���ܣ�һ���һƬ
˼·�������һ���ף������ΧһȦ�������ף�����������Ӧ���������ж���ΧһȦ�ĸ�����û���ף���û���׵ĵط�ȫ���ų�
1.����һ�����꣬�����ΧһȦû���ס������һȦ9��
2.������Χ8���������Χ����������ʾ
3.�����Χ8���������е��������Χ8����û���ף��ٴ��ظ����ݹ飩*/