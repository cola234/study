#include<stdio.h>
void leftRevolve(char* str,int k)
{
	for (int i = 0; i < k; i++)
	{
		int tmp = 0;
		tmp = str[0];
		for (int j = 0; j < 6-1; j++)
		{
			str[j] = str[j + 1];
		}
		str[5] = tmp;
	}
}
int main()
{
	//�����ַ���
	char str[] = "ABCDEF";
	int k = 0;
	printf("������Ҫ���������ַ�");
	scanf_s("%d", &k);
	leftRevolve(str, k);
	printf("%s", str);
	return 0;
}
//void BinarySearch(int(*p)[10],int i,int k)//���ֲ��� �����õ����ǵ�i�е�ָ�� &arr 
//{
//	int left = 0;
//	int right = 10 - 1;
//	while (left <= right)
//	{
//		int mid = (left + right) / 2;
//		if (*(*(p+i) + mid) < k)//*(*(p+i) + mid)��ʾ��i���м��±����
//		{
//			left = mid+1;
//		}
//		else if (*(*(p + i) + mid) > k)
//		{
//			right = mid-1;
//		}
//		else
//		{
//			printf("�ҵ��ˣ��ڵ�%d���� \n",i+1 );
//			break;
//		}
//	}
//}
//void serach(int arr[10][10],int row,int col,int k)
//{
//	//������ά�����ÿһ�� ��������
//	for (int i = 0; i < row; i++)//��i��
//	{
//	   
//		BinarySearch(arr, i, k);//����һ�д������ֲ��� ʹ������ָ��
//	}
//}
//int main()
//{
//	int arr[10][10];
//	int row, col,k;//�� �� Ҫ���ҵ���
//	printf("�������к���");
//	scanf_s("%d %d", &row, &col);
//	printf("������Ҫ���ҵ���");
//	scanf_s("%d", &k);
//	for (int i = 0; i < row; i++)//��ֵ
//	{
//		for (int j = 0; j < col; j++)
//		{
//			arr[i][j] = i + j + 1;
//		}
//	}
//	serach(arr,row,col,k);
//	for (int i= 0; i < row; i++)
//	{
//		for (int j = 0; j < col; j++)
//		{
//			printf("%d ", arr[i][j]);
//		}
//		printf("\n");
//	}
//	return 0;
//}