#include<stdio.h>

/*int main()
{
	int n = 0;
	int i = 0;
	int j = 0;
	int count = 0;
	int arr[50];
	scanf_s("%d", &n);
	for (i = 0; i < n; i++)//��ֵ
	{
		scanf_s("%d", &arr[i]);
	}
	for (j = 0; j < n - 1; j++)
	{
	  if (arr[j] > arr[j + 1])
		{
		  count++;
		}
	  else if (arr[j] < arr[j + 1])
	  {
		  count--;
	  }
	  else
	  {
		  break;
	  }
	}
	if (count == n-1 || count == 1-n)
	{
		printf("sorted");
	}
	else
	{
		printf("unsorted");
	}
	return 0;
}
*/
//ָ��������

//int main()
//{
//	int a[5] = { 1, 2, 3, 4, 5 };
//	int *ptr = (int *)(&a + 1);
//	printf("%d,%d", *(a + 1), *(ptr - 1));
//	return 0;
//}
//����Ľ����ʲô��2 5
/*
&aΪa����ĵ�ַ�����ַ+1 Ϊ5����ĵ�ַ ptr-1Ϊ5�ĵ�ַ
a+1Ϊ��Ԫ�ص�ַ+1��2�ĵ�ַ
*/
//
//struct Test
//{
//	int Num;
//	char *pcName;
//	short sDate;
//	char cha[2];
//	short sBa[4];
//}*p = (struct Test*)0x100000;//�ṹ��ָ��
////����p ��ֵΪ0x10 00 00�� ���±���ʽ��ֵ�ֱ�Ϊ���٣�
////��֪���ṹ��Test���͵ı�����С��20���ֽ�
//int main()
//{
//	printf("%p\n", p + 0x1);
//	//0x100000+20 = 0x100014 �ṹ��ָ������+1����һ���ṹ��
//	printf("%p\n", (unsigned long)p + 0x1);
//	//��PǿתΪ�޷��ų�����0x100000��������ڼ���һ��1�ڱ�Ϊ16����
//	printf("%p\n", (unsigned int*)p + 0x1);
//	//��pǿתΪһ���޷�������ָ��+1 �൱��һ���޷�������ָ������һ�����εĴ�С
//	//Ҳ����+4 ���0x100004
//	return 0;
//}

//int main()//������ %x��ʮ���������
//{
//	int a[4] = { 1, 2, 3, 4 };
//	int *ptr1 = (int *)(&a + 1);//
//	int *ptr2 = (int *)((int)a + 1);//��ַǿתΪint+1�ڱ�ɵ�ַ
//	//�����ǰ������С�˴洢 1 2 3 4���ڴ��еĴ洢��ʽ����
//	//01 00 00 00 02 00 00 00 03 00 00 00 04 00 00 00
//	//����a�ĵ�ַ��0x0012ff40 ǿתΪint���һ������ ��+1 ��תΪ��ַ
//	//���Ϊ0x0012ff41 ��a+1���������� a+1��������4���ֽ� ������������һ���ֽ�
//	//����ptr2ȡ������16���Ƶĵ�ַ����02 00 00 00 ������С�˴洢���Է����ó���
//	//�������0x02000000 ʡ�Ե�ǰ���0 ���2000000
//	printf("%x,%x", ptr1[-1], *ptr2);
//	//ptr1[-1]�൱��*(ptr-1)
//	return 0;
//}

//������
//int main()
//{
//	int a[3][2] = { (0, 1), (2, 3), (4, 5) };//���ű��ʽ��ֻ������
//	int *p;
//	p = a[0];
//	//a[i]��ʾ��i����Ԫ�ص�ַ a��ʾ��0�еĵ�ַ a+i��ʾ��i�еĵ�ַ
//	//���������a[0]��ʾΪ1�ĵ�ַ
//	printf("%d", p[0]);//*p
//	return 0;
//}

//int main()
//{
//	int a[5][5];
//	int(*p)[4];//����ָ�� ����Ϊint ��СΪ4
//	p = a;//a��ʾΪ��һ�еĵ�ַ
//	printf("%p,%d\n", &p[4][2] - &a[4][2], &p[4][2] - &a[4][2]);//&(*(*(p+4)+2))
//	//����ͼ��
//
//	return 0;
//}
//
/*
arr
a
&a
a[0]
a[0][0]
�ֱ����ʲô ��һά����Ͷ�ά������
*/
//int main()//������
//{
//	int aa[2][5] = { 1, 2, 3, 4, 5, 6, 7, 8, 9, 10 };
//	int *ptr1 = (int *)(&aa + 1);
//	int *ptr2 = (int *)(*(aa + 1));
//	printf("%d,%d", *(ptr1 - 1), *(ptr2 - 1));//10 
//	return 0;
//}
//
//int main()//������
//{
//	char *a[] = { "work","at","alibaba" };
//	char**pa = a;//����ָ�� aָ�����w�ĵ�ַ
//	pa++;//pa��at�ĵ�ַ
//	printf("%s\n", *pa);//
//	return 0;
//}

int main()//�ڰ���
{
	char *c[] = { "ENTER","NEW","POINT","FIRST" };
	char**cp[] = { c + 3,c + 2,c + 1,c };
	char***cpp = cp;
	printf("%s\n", **++cpp);//POINT
	printf("%s\n", *--*++cpp + 3);//ER
	printf("%s\n", *cpp[-2] + 3);//ST
	printf("%s\n", cpp[-1][-1] + 1);//EW
	return 0;
}

