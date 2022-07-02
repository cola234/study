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
	//左旋字符串
	char str[] = "ABCDEF";
	int k = 0;
	printf("请输入要左旋几个字符");
	scanf_s("%d", &k);
	leftRevolve(str, k);
	printf("%s", str);
	return 0;
}
//void BinarySearch(int(*p)[10],int i,int k)//二分查找 这里拿到的是第i行的指针 &arr 
//{
//	int left = 0;
//	int right = 10 - 1;
//	while (left <= right)
//	{
//		int mid = (left + right) / 2;
//		if (*(*(p+i) + mid) < k)//*(*(p+i) + mid)表示第i行中间下标的数
//		{
//			left = mid+1;
//		}
//		else if (*(*(p + i) + mid) > k)
//		{
//			right = mid-1;
//		}
//		else
//		{
//			printf("找到了，在第%d行中 \n",i+1 );
//			break;
//		}
//	}
//}
//void serach(int arr[10][10],int row,int col,int k)
//{
//	//遍历二维数组的每一行 来查找数
//	for (int i = 0; i < row; i++)//第i行
//	{
//	   
//		BinarySearch(arr, i, k);//把这一行传给二分查找 使用数组指针
//	}
//}
//int main()
//{
//	int arr[10][10];
//	int row, col,k;//行 列 要查找的数
//	printf("请输入行和列");
//	scanf_s("%d %d", &row, &col);
//	printf("请输入要查找的数");
//	scanf_s("%d", &k);
//	for (int i = 0; i < row; i++)//赋值
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