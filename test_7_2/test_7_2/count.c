//ʹ�ú���ָ����ʵ�ּ�����
#include<stdio.h>

void menu()
{
	printf("************************\n");
	printf("*****1.��      2.��*****\n");
	printf("*****3.��      4.��*****\n");
	printf("****     0.�˳�     ****\n");
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
void calc(int(*pf)(int, int))//�ص�����
{
	int x = 0;
	int y = 0;
	int ret = 0;
	printf("����������������");
	scanf_s("%d %d", &x, &y);
	ret = pf(x, y);
	printf("���Ϊ��%d\n", ret);
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
		printf("��ѡ��");
		scanf_s("%d", &k);
		switch (k)
		{
		case 1:
			printf("����������������");
			scanf_s("%d %d", &x, &y);
			ret = Add(x, y);
			printf("���Ϊ��%d\n", ret);
			break;
		case 2:
			printf("����������������");
			scanf_s("%d %d", &x, &y);
			ret = Sub(x, y);
			printf("���Ϊ��%d\n", ret);
			break;
		case 3:
			printf("����������������");
			scanf_s("%d %d", &x, &y);
			ret = Mul(x, y);
			printf("���Ϊ��%d\n", ret);
			break;
		case 4:
			printf("����������������");
			scanf_s("%d %d", &x, &y);
			ret = Div(x, y);
			printf("���Ϊ��%d\n", ret);
			break;
		default:
			printf("�������\n");
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
		printf("��ѡ��");
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
			printf("�������\n");
			break;
		}
	} while (k);
	return 0;
}
*/
/*int main()//���Ż�
{
	//��ź���ָ������� ��������
	int(*arr[])(int, int) = { 0,Add,Sub,Mul,Div };
	int k = 0;
	int x = 0;
	int y = 0;
	do
	{
		menu();
		printf("��ѡ��");
		scanf_s("%d", &k);
		if (k == 0)
		{
			printf("�˳�������");
			break;
		}
		else if (k >= 1 && k <= 4)
		{
			printf("����������������:");
			scanf_s("%d %d", &x, &y);
			int ret = arr[k](x, y);
			printf("%d\n", ret);
		}
		else
		{
			printf("�������\n");
		}

	} while (k);
	return 0;
}
*/