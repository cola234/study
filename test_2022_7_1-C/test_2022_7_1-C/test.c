//#include<stdio.h>
//int main()
//{
//	//1.�ַ�ָ��
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
/*ԭ��abcdef�ǳ����ַ�������ֻ�������� ���������޷����޸� ����û�б�Ҫ���ڶ��
�������ŵ��ǵ�ַ*/
//ָ�����飺�������ָ�������
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

///*����ָ�룺ָ�������ָ��*/
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
///*����һ����ά���� ��Ԫ���ǵ�һ�У�������һ������ָ��������*/
//void printf2(int(*p)[5], int r, int c)//ָ����������ӡ
//{
//	for (int i = 0; i < r; i++)
//	{
//		for (int j = 0; j < c; j++)
//		{
//			printf("%d ", *(*(p+i)+j));//p��һ��ָ������洢���Ƕ�ά�����һ�еĵ�ַ
//			//p+i��ʾ��һ�У��ڶ��У������У��ڽ����ã���ʾ��Ԫ�صĵ�ַ��*(p+i)+j��ʾ��һ���еڶ���Ԫ�أ�������Ԫ��...
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
//arr��ʾ��ά�����һ�еĵ�ַ��Ҳ����һ��int arr[5]�ĵ�ַ ���䴫�θ���������һ������ָ�����
//��*(p+i) �õ����Ƕ�ά�����i+1�е���Ԫ�صĵ�ַ 
//*/
//
//Add(int x, int y)
//{
//	return x+y;
//}
//int main()
//{
//	����ָ�� ���ں�����˵ &������ �ͺ��������Ǻ����ĵ�ַ
//	printf("%p\n", &Add);
//	int(*pf)(int, int) = &Add;//����ָ�������
//	int ret = (*pf)(2, 3);//(*�ǰ�����Բ�д)
//	printf("%d\n", ret);
//	return 0;
//}

//char(*) cal