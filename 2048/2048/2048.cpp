#include <stdio.h>
#include <string.h>
#define MAX_ARR 5
//int main()
//{
//	int a[2][3] = { 1,2,3,4,5,6 };
//	printf("%d", a[1][0]);
//	return 0;
//}
/*������һ�����飬������С����Ĭ�ϣ��������� �����ð������*/
//int main()//ð������ 
//{
//	int arr[MAX_ARR] = {};
//	for (int i = 0; i < MAX_ARR; i++)//ѭ����ֵ
//	{
//		scanf_s("%d", &arr[i]);
//	}
//	for (int i = 0; i < MAX_ARR - 1; i++)//���ۣ�ð���������ѭ��n-1�� nΪԪ�ظ���
//	{
//		for (int j = 0; j < MAX_ARR - 1 - i; j++)//���ѭ����һ�� �ڲ�ѭ��9�� ���ڶ��� �ڲ�8�� �Դ�����
//		{
//			if (arr[j] > arr[j + 1])
//			{
//				int t = arr[j];
//				arr[j] = arr[j + 1];
//				arr[j + 1] = t;
//			}
//		}
//	}
//	for (int j = 0; j < MAX_ARR; j++)
//	{
//		printf("%d", arr[j]);
//	}
//	return 0;
//}
//int main()//ѡ������  4 5 1 2 3
//{
//	int arr[MAX_ARR] = {};
//	for (int i = 0; i < MAX_ARR; i++)//ѭ����ֵ
//	{
//		scanf_s("%d", &arr[i]);
//	}
//	for (int i = 0; i < MAX_ARR - 1; i++)//���ۣ�ѡ���������ѭ��n-1�� nΪԪ�ظ���
//	{
//		for (int j = i+1; j < MAX_ARR; j++)//��Ϊÿ�ζ�Ҫ�õ�һ��Ԫ�غͺ����Ԫ��ȥ�� ����j=i+1 ��Ϊÿ�ζ����ŵ���� ����j<Ԫ�ظ���������±�ΪԪ�ظ���-1��
//		{
//			if (arr[i] > arr[j])//����Ԫ�ػ��� �����±���t
//			{
//				int t = arr[i];//��j�Ž�t��
//				arr[i] = arr[j];//��i�Ž�j
//				arr[j] = t;//��t�Ž�j
//			}
//		}
//	}
//		for (int j = 0; j < MAX_ARR; j++)
//	{
//		printf("%d", arr[j]);
//	}
//	return 0;
////}
//}

/*  
void Init(int arr[], int sz)
{
	for (int i = 0; i < sz; i++)
	{
		arr[i] = 0;
	}
}
void reverse(int arr[],int sz) ����Ϊ����ֵ
{
	int left = 0;
	int right = sz-1;
	int tmp = 0;
	while (left<right)
	{
		tmp = arr[left];
		arr[left] = arr[right];
		arr[right] = tmp;
		left++;
		right--;
	}
}
int main()
{
	int arr[] = {1,2,4,5,8,8,3,4};
	int sz = sizeof(arr) / sizeof(arr[0]);//����Ԫ�ظ���
	Init(arr, sz);
	reverse(arr,sz);
	return 0;
}
*/
//int main()
//{
//	int arr[5] = {1,2,3,4,5};
//	int arr1[5] = {5,4,3,2,1};
//	int sz = sizeof(arr) / sizeof(arr[0]);//����Ԫ�ظ���
//	int left = 0;
//	int right = sz - 1;
//	for (int i = 0; i < sz; i++)
//	{
//		int tmp = arr[left];
//		arr[left] = arr1[left];
//		arr1[left] = tmp;
//		left++;
//	}
//	for (int i = 0; i < sz; i++)
//	{
//		printf("%d ", arr[i]);
//	}
//	for (int i = 0; i < sz; i++)
//	{
//		printf("%d ", arr1[i]);
//	}
//	return 0;
//}


/*֪ʶ�㣺ԭ�� ���� ����
ԭ��=���λ������λ��+��λ����ֵ��
0������ 1�Ǹ���
����7 ��ԭ��Ϊ 0000 0111 -7��ԭ��Ϊ1000 0111
���룺������ԭ����ͬ ������ԭ��Ļ����� ����λ���� �����İ�λȡ��
�� -7�ķ���Ϊ 1111 1000
�����������ԭ����ͬ �������ڷ���Ļ�����+1
�� -7�Ĳ���Ϊ1111 1001*/
//int count_bit(int a)//ԭ�� ��һ������ģ2 �õ����������λ���һλ���� �ڳ���2 ������������� ����ѭ�����Եõ�����λ�� ���Ľ��Ϊ0
//{
//	int count = 0;
//	while (a)
//	{
//		if (a % 2 == 1)
//		{
//			count++;
//		}
//		a = a / 2;
//	}
//	return count;
//}
//int main()//��һ�����Ķ�����1�ĸ���
//{
//	int a = 13;//11111001111
//	int count = count_bit(a);
//	printf("%d", count);
//	return 0;
//}
//void arraymove(int arr[])//��һ��
//{
//	int b[10] = {};
//	for (int i = 0; i < 10; i++)
//	{
//		b[i] = arr[i];
//	}
//	int x = 0;
//	scanf_s("%d", &x);
//	arr[3] = x;
//	for (int i = 4; i < 9; i++)
//	{
//		arr[i] = b[i-1];
//	}
//}
//int main()
//{
//	int a[10] = {};
//	for (int i = 0; i < 8; i++)//��ʼ��ǰ8��Ԫ��
//	{
//		a[i] = i;
//	}
//	arraymove(a);
//	for (int i = 0; i < 10; i++)
//	{
//		printf("%d ", a[i]);
//	}
//	return 0;
//}
//int main()//�ڶ���
//{
//	int a = 0;
//	int count = 0;
//	int arr[40] = {};//������һ����x��Ԫ�ص�����
//	printf("����������ÿ��ѧ���ĳɼ���(���롮111����ֹͣ)\n");
//	while (a<=40)
//	{
//		scanf_s("%d", &arr[a]);
//		if (arr[a] < 60)
//		{
//		   count++;
//		}
//		if (arr[a] == 111)
//		{
//			break;
//		}
//		a++;
//	}
//	printf("�����������Ϊ��%d",count);
//	return 0;
//}
//int Max_arr(int arr[])
//{
//	int tmp = 0;
//	for (int i = 0; i < 4; i++)
//	{
//		if (arr[i] > arr[i + 1])
//		{
//			tmp = arr[i];
//		}
//		if (arr[i] < arr[i + 1])
//		{
//			tmp = arr[i+1];
//		}
//	}
//	return tmp;
//}
//int main()//������
//{
//	int arr[5] = {};
//	for (int i = 0; i < 5; i++)
//	{
//		scanf_s("%d", &arr[i]);
//	}
//	int a = Max_arr(arr);
//	printf("���ֵΪ%d", a);
//	return 0;
//}
//void max(int a[])
//{
//	int k = 0;
//	int i;
//	for (i = 0; i < 10; i++)
//	{
//		if (a[i] >= k)
//			k = a[i];
//	}
//	return k;
//}
//
//int main()
//{
//	printf("������10��������\n");
//	int a[10];
//	int i;
//	for (i = 0; i < 10; i++)
//	{
//		scanf_s("%d", &a[i]);
//	}
//
//	int c = max(a);
//	printf("�������%d", c);
//	return 0;
//}
//void printf(int *p, int sz)
//{
//	for (int i = 0; i < sz; i++)
//	{
//		printf("%d ", *(p + i));//(p+i)ΪԪ�ص�ַ+1 �����pΪint���� 
//	}
//}
//int main()//��ָ���ʾ��ַ
//{
//	int arr[] = { 1,2,3,4,5,6,7,8,9,10 };
//	int sz = sizeof(arr) / sizeof(arr[0]);
//	printf(arr, sz);
//	return 0;
//}


//int my_strlen(char *str)//�������������Ԫ�صĵ�ַ
//{
//	int count = 0;//������
//	while (*str != '\0')
//	{
//		count++;
//		str++;
//	}
//	return count;
//}
//void reverse_string(char arr[])
//{
//	int left = 0;
//	int right = my_strlen(arr) - 1;//�����ַ������� -1Ϊ����±�
//	while (left<=right)
//	{
//		int tmp = 0;
//		tmp = arr[left];
//		arr[left] = arr[right];
//		arr[right] = tmp;
//		left++;
//		right--;
//	}
//}
//
//
//int main()//�����ӡ�ַ���
//{
//	char arr[] = "abcdef";
//	reverse_string(arr);
//	printf("%s\n", arr);
//	return 0;
//}




/*1.abcdef �Ȱ�f�ŵ�a ���fbcdef
 2.fbcdef ��f���\n ���fbcde 
 3.�ж� �ַ������ȴ���2 �ݹ�
 4.bcde ��e�ŵ�b ���ecde
 5.ecd 
 6.dd
 7.d
 8.dc edc edcb fedcb fedcba
 9.*/

//����һ���Ǹ����������������������֮��
//Digitsum(1729)
//Digitsum(172)+1729%10
//Digitsum(17)+172%10+1729%10
//Digitsum(1) +17%10+ 172 % 10 + 1729 % 10
//int Digitsum(unsigned int num)
//{
//	if (num > 9)
//	{
//		return Digitsum(num / 10) + num % 10;
//   }
//	else
//	{
//		return num;
//	}
//}
//int main()
//{
//	unsigned int num = 0;
//	scanf_s("%d", &num);//1729
//	int ret = Digitsum(num);
//	printf("%d", ret);
//	return 0;
//}
//
//double Pow(int n, int k)
//{
//	if (k < 0)
//		return (1.0 / (Pow(n, -k)));
//	else if (k == 0)
//		return 1;
//	else
//		return n * Pow(n, k - 1);
//}
//int main()
//{
//	int n = 0;
//	int k = 0;
//	scanf_s("%d", &n);
//	scanf_s("%d", &k);
//	double ret = Pow(n, k);
//	printf("%lf", ret);
//	return 0;
//}
//void main()
//{
//	int a[5] = { 4,6,3,23,9 };
//	int max, p, i;
//	max = a[0];
//		p = 0;
//	for (i = 1; i < 5; i++)
//		if (a[i] > max)//�������Ԫ�ر�max�� ��max�ŵ�������
//		{
//			max = a[i];
//			p = i;
//		}
//	printf("���ֵΪ��%d", max);
//	printf("���ֵ�±�Ϊ��%d", p);
//}


//�ṹ�������д��
//��һ�֣�
//struct Stu
//{
//	char name[20];
//	short age;
//	char tele[100];
//	char sex[10];
//}x1,x2,x3;//ȫ�ֱ���
//int main()
//{
//	struct Stu s;//�ֲ�����
//	return 0;
//}


//�ڶ���
//typedef struct Stu//typedef�����ã���������������
//{
//	char name[20];
//	short age;
//	char tele[100];
//	char sex[10];
//}Stu1;//�����ǻ�������
//int main()
//{
//	Stu1 s;//�ֲ�����
//	return 0;
//}


//typedef struct Stu//typedef�����ã���������������
//{
//	char name[20];
//	short age;
//	char tele[12];
//	char sex[5];
//}Stu;//�����ǻ�������
//
//void Print2(Stu* ps)
//{
//	printf("name:%s\n", ps->name);
//}
//
//int main()//��ָ��ķ�ʽ��ӡ�ṹ��Ԫ��
//{
//	Stu s = { "����" ,20,"15566687541","��"};//�ֲ�����
//	Print2(&s);
//	return 0;
//}

//int main()//��һ��
//{
//	char str[10]; 
//	printf("�������ַ�����");
//	scanf_s("%s", str);
//	for (int i = 0; i <= 10;i++)
//	{
//		if (str[i] >= 65 && str[i] <= 90)//A~Z
//		{
//			printf("%d ", str[i] - 64);
//		}
//		if (str[i] >=97  && str[i] <= 122)//a~z
//		{
//			printf("%d ", str[i] - 96);
//		}
//		else
//		{
//			printf("0 ");
//		}
//	}
//	return 0;
//}
//#define ROW 5
//#define COL 5
//void assign(int str[ROW][COL])//��ֵ
//{
//	printf("�����θ���һ��5x5�ľ���ֵ\n");
//	for (int i = 0; i < ROW; i++)
//{
//	for (int j = 0; j < COL; j++)
//	{
//		scanf_s("%d", &str[i][j]);
//	}
//}
//}
//void add(int str1[ROW][COL], int str2[ROW][COL], int str3[ROW][COL])//���
//{
//	for (int i = 0; i < ROW; i++)
//	{
//		for (int j = 0; j < COL; j++)
//		{
//			str3[i][j] = str1[i][j] + str2[i][j];
//		}
//	}
//}
//int main()
//{
//	int str1[ROW][COL],str2[ROW][COL],str3[ROW][COL];
//	assign(str1);
//	assign(str2);
//	add(str1, str2, str3);
//	printf("��������ӵ�ֵΪ��\n");
//	for (int i = 0; i < ROW; i++)
//	{
//		for (int j = 0; j < COL; j++)
//		{
//			printf("%d ",str3[i][j]);
//		}
//		printf("\n");
//	}
//	return 0;
//}

//int main()
//{
//	char arr[21];
//	printf("�������ַ���");
//	scanf_s("&s", arr);
//	for (int i = 0; i < 21 - 1; i++)//
//	{
//		for (int j = i+1; j < 21; j++)//��Ϊÿ�ζ�Ҫ�õ�һ��Ԫ�غͺ����Ԫ��ȥ�� ����j=i+1 ��Ϊÿ�ζ����ŵ���� ����j<Ԫ�ظ���������±�ΪԪ�ظ���-1��
//		{
//			if (arr[i] > arr[j])//����Ԫ�ػ��� �����±���t
//			{
//				int t = arr[i];//��j�Ž�t��
//				arr[i] = arr[j];//��i�Ž�j
//				arr[j] = t;//��t�Ž�j
//			}
//		}
//	}
//	printf("%s",arr);
//	return 0;
//}

//
//void add(int a1[5][5], int b1[5][5])
//{
//	int i, j;
//	int c[5][5];
//
//	for (i = 0; i < 5; i++)
//	{
//		for (j = 0; j < 5; j++)
//		{
//			c[i][j] = a1[i][j] + b1[i][j];
//			printf("%d ", c[i][j]);
//		}
//	}    printf("\n");
//}
//
//int main()
//{
//	int i, j;
//	printf("������һ��5��5������:\n");
//	int a[5][5];
//	for (i = 0; i < 5; i++)
//	{
//		for (j = 0; j < 5; j++)
//		{
//			int x = 0;
//			scanf_s("%d", &x);
//			a[i][j] = x;
//		}
//		printf("\n");
//	}
//
//	printf("������һ��5��5������:\n");
//	int b[5][5];
//	for (i = 0; i < 5; i++)
//	{
//		for (j = 0; j < 5; j++)
//		{
//			int x = 0;
//			scanf_s("%d", &x);
//			b[i][j] = x;
//		}
//		printf("\n");
//	}
//
//	add(a, b);
//
//	return 0;
//}
void main()
{
	int *p1, *p2, *p;
	int a = 5, b = 8;
	p1 = &a; p2 = &b;
	if (a < b)
	{
		p = p1;
		p1 = p2;
		p2 = p;
	}
	printf("*p1 = %d, *p2 = %d\n", *p1, *p2);
	printf("a = %d, b = %d\n", a, b);
}