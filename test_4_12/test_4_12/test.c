#include <stdio.h>
//void test(int arr[3][5])
//{
//
//}
//void test1(int arr[][5])
//{
//
//}
//void test2(int arr[3][])//error
//{
//
//}
//void test3(int (*arr)[5])//��ά���鴫�� ������һ��ָ��ָ�������Ԫ�ص����� Ҳ���Ƕ�ά����ĵ�һ�� Ҳ���Ƕ�ά����ĵ�һ��Ԫ�� ����ͨ������ҵ���������
//{
//
//}
//int Add(int x, int y)
//{
//	return x + y;
//}
//int main()
//{
//	int x = 0;
//	int y = 10;
//	int arr[3][5] = { 0 };//��ά���鴫��
//	test(arr);
//	test1(arr);
//	test2(arr);
//	Add(x, y)
//	int(*pa)(int, int) = Add;//����ָ��
//	return 0;
//	//���ӣ�����ָ�� ���� ��*���������������������ͣ�
//}
//���� �ĵ�ַ 1.������ 2.&������ ���ߵȼ� ���Ǻ����ĵ�ַ 

//void Print(char* str)
//{
//	printf("%s\n", str);
//}
//int main()
//{
//	void(*p)(char*) = Print;//����ָ��
//	(*p)("hello world");//����*������ ���ã�������
//	(*  (void(*)() 0)();   //void(*)()Ϊ����ָ�� ������������Ϊǿ������ת�� ��0ǿ������ת��Ϊ������ַ
//	//Ȼ���ڸ������ղΣ��൱�ڵ���0��ַ���ĺ���
//	void(*signal(int, void(*)(int)))(int);
//	return 0;
//}
//int Add(int x, int y)
//{
//	return x + y;
//}
//int Sub(int x, int y)
//{
//	return x - y;
//}
//int Mul(int x, int y)
//{
//	return x * y;
//}
//int Div(int x, int y)
//{
//	return x / y;
//}
//int main()
//{
//	int* arr[5];
//	int(*pa)(int, int) = Add;//����ָ��
//	int(*parr[4])(int, int) = { Add,Sub,Mul,Div };//����ָ������ ��������һ������ ������ź���ָ�� []�����ȼ�����* ����parr�ȸ�[]����ڸ�*���
//	for (int i = 0; i < 4; i++)
//	{
//		printf("%d", parr[i](2, 3));//����parr�Ѿ��ǵ�ַ�� ���ü�*��  *�ź�������ǵ�ַ
//	}
//	return 0;
//}

//char* my_strcpy(char* dest, const char* src)
////1.дһ������ָ��pf ָ��my_strcpy
////2.дһ������ָ������ ���4��my_strcpy
//{
//	;
//}
//
//int main()
//{
//	char* (*pf)(char*, const char*)=my_strcpy;//����ָ��pf
//	char* (*parr[4])(char*, const char*) = { my_strcpy,my_strcpy,my_strcpy,my_strcpy };//����ָ��p
//	printf("%s", parr[1]);
//	return 0;
//}
//void menu()
//{
//	printf("***1.Add    2.Sub***\n");
//	printf("***3.Mul    4.Div***\n");
//	printf("***    0.exit    ***\n");
//}
//int Add(int x, int y)
//{
//	return x + y;
//}
//int  Sub(int x, int y)
//{
//	return x - y;
//}
//int Mul(int x, int y)
//{
//	return x * y;
//}
//int Div(int x, int y)
//{
//	return x / y;
//}
//int main()//����ָ����÷���������(ת�Ʊ�
//{
//	int input = 0;
//	int x = 0;
//	int y = 0;
//	int(*pfarr[5])(int, int) = { 0,Add,Sub,Mul,Div };
//	do
//	{
//		menu();
//		printf("��ѡ��>");
//		scanf_s("%d", &input);
//		printf("����������������");
//		scanf_s("%d%d", &x,&y);
//		int ret = pfarr[input](x, y);
//		printf("%d\n", ret);
//	} while (input);
//	return 0;
//}


/*�ص����� ����ָ��ʹ�÷���֮��*/

void menu()
{
	printf("***1.Add    2.Sub***\n");
	printf("***3.Mul    4.Div***\n");
	printf("***    0.exit    ***\n");
}
int Add(int x, int y)
{
	return x + y;
}
int  Sub(int x, int y)
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
void Calc(int(*pf)(int,int))//���������Ǻ����ĵ�ַ ����Ҳ�ú����ĵ�ַ���β�
{
	int x = 0;
	int y = 0;
	printf("����������������\n");
	scanf_s("%d%d\n", &x, &y);
	printf("%d", pf(x, y));
}
int main()//����ָ����÷���������(ת�Ʊ�
{
	int input = 0;
	do
	{
		menu();
		printf("��ѡ��>");
		scanf_s("%d", &input);
		switch (input)
		{
		case 1:
			Calc(Add);
		case 2:
			Calc(Sub);
		case 3:
			Calc(Mul);
		case 4:
			Calc(Div);
			break;
		case 0:
			printf("�˳�\n");
			break;
		default:
			printf("ѡ�����\n");
		}
	} while (input);
	return 0;
}