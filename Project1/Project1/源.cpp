#include<stdio.h>
//int main()
//{
//	double arr[10] = {};
//	int i,x=0;
//	for (i = 0; i <= 10; i++)
//	{
//		arr[i] = 0.1+x;
//		x = x + i;//x 0 1 30
//	}
//	return 0;
//}
//int main()
//{
//	char arr[25] = {};
//	int b = 65;
//	int a = 98;
//	int i = 0;
//	for (i = 0; i <= 25; i++)
//	{
//		if (i % 2 == 0)//���i��������Ϊ0 �Ǵ�д
//		{
//			arr[i] = b;
//			b += 2;
//		}
//		else
//		{
//			arr[i] = a;
//			a += 2;
//		}
//	}
//	return 0;
//}
//int main()//��һ��
//{
//	int arr[10] = {};//10��Ԫ�ص�����
//	int z = 0,f=0,zero=0;
//	printf("������ʮ��Ԫ��\n");
//	for (int i = 0; i < 10; i++)
//	{
//		scanf_s("%d", &arr[i]);
//		if (arr[i] > 0)
//		{
//			z++;
//		}
//		if (arr[i] == 0)
//		{
//			zero++;
//		}
//		else if(arr[i] < 0)
//		{
//			f++;
//		}
//	}
//	printf("�����ĸ���Ϊ:%d\n", z);
//	printf("�����ĸ���Ϊ:%d\n", f);	
//	printf("0�ĸ���Ϊ:%d\n", zero);
//	return 0;
//}
int main()
{
	int arr[10] = {};
	int tmp;
	printf("���������������10��Ԫ��\n");
	for (int i = 0; i < 10; i++)
	{
	   scanf_s("%d", &arr[i]);//ѭ����ֵ
	}
	for (int i = 0; i < 10; i++)//��ѭ��1�� ��ѭ��10��
	{
		tmp = 10 - 1 - i;//10-1Ϊ�±� -1Ϊ�ڲ�ѭ�� ԭ���� �ȴ�ӡ����� �����δ�ӡǰ��
		for (int j = 0; j < 10; j++)
		{
			printf("%d ", arr[tmp++]);//ѭ����ӡ�������Ԫ�أ��ȴ�ӡ������
			if (tmp >= 10)//��Ϊֻ��10��Ԫ�� ������±����Ϊ9 һ��tmp��ֵ����9 ���Ϊ0
			{
				tmp = 0;
			}
		}
		printf("\n");
	}
}
