//#include<stdio.h>
//int main()
//{
//	//1.字符指针
//	const char* p1 = "abcdef";
//	const char* p2 = "abcdef";
//
//	char arr1[] = "abcdef";
//	char arr2[] = "abcdef";
//	if (p1 == p2)
//		printf("p1 == p2\n");
//	else
//		printf("p1 != p2\n");
//	if (arr1 == arr2)
//		printf("arr1 == arr2\n");
//	else
//		printf("arr1 != arr2\n");
//	return 0;
//}
/*原因：abcdef是常量字符串存在只读数据区 这种数据无法被修改 所以没有必要存在多份
而这里存放的是地址*/
//指针数组：用来存放指针的数组
//int main()
//{
//	int arr1[] = { 1,2,3 };
//	int arr2[] = { 4,5,6 };
//	int arr3[] = { 7,8,9 };
//	int* parr[3] = { arr1,arr2,arr3 };
//	for (int i = 0; i < 3; i++)
//	{
//		for (int j = 0; j < 3; j++)
//		{
//			//printf("%d ", *(parr[i]+j));
//			printf("%d ", parr[i][j]);
//		}
//		printf("\n");
//	}
//	return 0;
//}

///*数组指针：指向数组的指针*/
//void printf1(int arr[3][5], int r, int c)
//{
//	for (int i = 0; i < r; i++)
//	{
//		for (int j = 0; j < c; j++)
//		{
//			printf("%d ", arr[i][j]);
//		}
//		printf("\n");
//	}
//}
///*对于一个二维数组 首元素是第一行，所以用一个数组指针来接收*/
//void printf2(int(*p)[5], int r, int c)//指针数组来打印
//{
//	for (int i = 0; i < r; i++)
//	{
//		for (int j = 0; j < c; j++)
//		{
//			printf("%d ", *(*(p+i)+j));//p是一个指针里面存储的是二维数组第一行的地址
//			//p+i表示第一行，第二行，第三行，在解引用，表示首元素的地址，*(p+i)+j表示第一行中第二个元素，第三个元素...
//		}
//		printf("\n");
//	}
//}

//int main()
//{
//	int arr[] = { 1,2,3,4,5,6,7,8,9,10 };
//	//int(*p)[] = &arr;//error
//	int(*p)[10] = &arr;
//	for (int i = 0; i < 10; i++)
//	{
//		printf("%d ", (*p+i));
//	}
//	int arr[3][5] = { 1,2,3,4,5,2,3,4,5,6,3,4,5,6,7 };
//	printf1(arr, 3, 5);
//    printf2(arr, 3, 5);
//	return 0;
//}
///*
//arr表示二维数组第一行的地址，也就是一个int arr[5]的地址 将其传参给函数，用一个数组指针接收
//而*(p+i) 拿到的是二维数组第i+1行的首元素的地址 
//*/
//
//Add(int x, int y)
//{
//	return x+y;
//}
//int main()
//{
//	函数指针 对于函数来说 &函数名 和函数名都是函数的地址
//	printf("%p\n", &Add);
//	int(*pf)(int, int) = &Add;//函数指针的类型
//	int ret = (*pf)(2, 3);//(*是摆设可以不写)
//	printf("%d\n", ret);
//	return 0;
//}

//char(*) cal