///������Ϸ
//��һ������ӡһ����Ϸ�˵� �ú���ʵ��
#include <stdio.h>
#include "game1.h"

void menu()
{
	int a = 0;
	printf("*********************************************\n");
	printf("*****************1.play 0.exit***************\n");
	printf("******�Ƿ�ʼ��Ϸ1.��ʼ��Ϸ 0.������Ϸ******\n");
}
/*��Ϸ��ʵ��˼·
1.�����ڲ�һ�����̣��ⲿһ������
�ڲ��ŵ����׵���Ϣ����Ϊ��ҽ�������ʾ�׵����������׵��������׵ı�ʶ�����ܻụ���ͻ�������ⲿ�ٷ�һ�����̣��ⲿ������ʾ����ң��ⲿ����ֻ��ʾ��һ����ɨ��ɨ��������
�����������̡�
*/
void game()
{
	char mine[ROWS][COLS] = { 0 };//�ڲ�
	char show[ROWS][COLS] = { 0 };//�ⲿ
	InitBoard(mine, ROWS, COLS, '0');//�����ĳ�ʼ�� ��Ҫ��ʼ�������ݴ����ȥ
	InitBoard(show, ROWS, COLS, '*'); 
	DisplayBoard(show, ROW, COL);//��ӡ����
	Setmine(mine, ROW, COL); //������
	//DisplayBoard(mine, ROW, COL);//��ӡ���� �﷨�涨���������õ�����ô���� �βκ�ʵ�εĶ���ͱ����������õ�����һ��
	Findmine(mine, show, ROW, COL);//ɨ�� Ҫͬʱ������������,ʵ�ʲ���������9x9 ����Խ��
}
void test()
{
	int a = 0;
	srand((unsigned int)time(NULL));//����ʱ���
	do
   {  
	menu();//��ӡ���˵�
	printf("��ѡ��:>");
	scanf_s("%d", &a);
		switch (a)
		{
		case 1:
			printf("��ʼ��Ϸ\n");
			game();//��Ϸ����Ҫ����
			break;
		case 0:
			printf("�˳���Ϸ\n");
			break;
		default:
			printf("�������������ѡ��\n");
			break;
		}
	} while (a);//���aΪ1 ��ʼ��Ϸ����� ����ѭ���ٴν��� aΪ�� Ϊ0 while�ж�Ϊ�� ���� Ϊ��0 ҲΪ�� �ٴν���
}
int main()
{   
	test();
	return 0;
}