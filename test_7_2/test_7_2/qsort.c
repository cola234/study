#include<stdio.h>
#include<string.h>
//ð������ ���ֻ���������ε�����
void bubblesorteasy(int arr[],int sz)
{
	for (int i = 0; i <sz-1; i++)
	{
		int flag = 1;
		for (int j = 0; j < sz - 1 - i;j++)
		{
			if (arr[j] < arr[j + 1])
			{
				int tmp = 0;
				tmp = arr[j];
				arr[j] = arr[j + 1];
				arr[j + 1] = tmp;
				flag++;
			}
		}
		if (flag == 1)
		{
			break;
		}
	}
	for (int i = 0; i < sz; i++)
	{
		printf("%d ", arr[i]);
	}
}
void Swap(char* buf1, char* buf2, int width)
{
	int tmp = 0;
	tmp = *buf1;
	*buf1 = *buf2;
	*buf2 = tmp;
	buf1++;
	buf2++; 
}
void bubblesortpro(void* base, int sz, int width, int(*cmp)(const void* e1, const void* e2))//�߼��汾��ð�����򣬿������������͵����ݣ��൱��qsort
{
	for (int i = 0; i < sz - 1; i++)
	{
		int flag = 1;
		for (int j = 0; j < sz - 1 - i; j++)
		{
			//�Ƚ������� ����cmp��������������ֵ��������һ��ֵ��ʾ��С
			if (cmp((char*)base + j * width, (char*)base + (j + 1)*width) > 0)//Ҳ����e1>e2
			{
				Swap((char*)base + j * width, (char*)base + (j + 1)*width,   width);//����  ����ȥ�������ݵ�λ���Ϳ��
				flag = 0;
			}
		}
		if (flag == 1)
		{
			break;
		}
	}
}

//qsort ���� �������������͵�����

//void qsort( void* base,//Ҫ��������ݵ���ʼλ��
//			size_t num,//�����������Ԫ���м���
//			size_t width,//�����������Ԫ�� �Ĵ�С
//			int(*cmp)(const void* e1, const void* e2)//����ָ�� e1 e2����Ҫ�Ƚϵ�����Ԫ�صĵ�ַ cmp����Ƚϵĺ���
//)
//{
//	;
//}
//�Ƚ���������Ԫ��
/*
qsort�ж���cmp�ȽϺ����Ĺ涨�����e1<e2 returnһ��<0����
���e1 = e2 return 0
���e1 > e2 returnһ��>0���� 
*/
struct Stu
{
	char name[30];
	int age;
};
int cmp_int(const void* e1, const void* e2)//�����e1 - e2��������
{
	return (*(int*)e1 - *(int*)e2);//��void*ǿתΪint*����
}

int cmp_struct_name(const void* e1, const void* e2)
{
	//������������������ֵ�˳��
	//strcmp���ص�ֵ�ǣ�0 ��0 ��0���� �������ַ����Ƚ�
	strcmp(((struct Stu*)e1)->name, ((struct Stu*)e2)->name);//��e1ǿתΪ�ṹ��ָ��
}

int cmp_struct_age(const void* e1, const void* e2)
{
	return((struct Stu*)e1)->age-((struct Stu*)e2)->age;//��e1ǿתΪ�ṹ��ָ��
}


void test1()//��������
{
	int arr[] = { 10,9,8,7,6,5,4,3,2,1 };
	int sz = sizeof(arr) / sizeof(arr[0]);
	qsort(arr, sz, sizeof(arr[0]), cmp_int);//�⺯��
	//void*���޾������͵�ָ�룬���Խ����������͵ĵ�ַ
	//���ǲ��ܽ��н����ò�����Ҳ���ܽ��мӼ������Ĳ���
	for (int i = 0; i < sz; i++)
	{
		printf("%d ", arr[i]);
	}

}

void test2()
{
	struct Stu s[] = { {"zhangsan",15},{"lisi",30},{"wangwu",25} };
	int sz = sizeof(s) / sizeof(s[0]);
	qsort(s, sz, sizeof(s[0]), cmp_struct_name);
}

void test3()
{
	int arr[] = { 10,9,8,7,6,5,4,3,2,1 };
	int sz = sizeof(arr) / sizeof(arr[0]);
	bubblesortpro(arr, sz, sizeof(arr[0]), cmp_int);
	for (int i = 0; i < sz; i++)
	{
		printf("%d ", arr[i]);
	}
}

int main()
{
	//test1();
	//test2();//����ṹ��
	test3();
    return 0;
}