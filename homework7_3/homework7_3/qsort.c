#include<stdio.h>
#include<stdlib.h>
/*
struct Stu
{
	char name[20];
	int age;
};
int cmp_int(const void* e1, const void* e2)
{
	return (*(int*)e1 - *(int*)e2);
}

int cmp_char(const void* e1, const void* e2)
{
	return (*(char*)e1 - *(char*)e2);
}

int cmp_Stu_name(const void* e1, const void* e2)
{
	strcmp (((struct Stu*)e1)->name ,((struct Stu*)e2)->name);
}
void test1()//排整形
{
	int arr[] = { 10,9,8,7,6,5,4,3,2,1 };
	int sz= sizeof(arr) / sizeof(arr[0]);
	qsort(arr, sz, sizeof(arr[0]), cmp_int);
	for (int i = 0; i < sz; i++)
	{
		printf("%d ", arr[i]);
	}
	printf("\n");
}
void test2()//char形
{
	char arr[] = { "ASDASDXZFVC" };
	int sz = sizeof(arr) / sizeof(arr[0]);
	qsort(arr, sz-1, sizeof(arr[0]), cmp_char);
	for (int i = 0; i < sz-1; i++)
	{
		printf("%c ", arr[i]);
	}
	printf("\n");
}
void test3()//结构体-name
{
	struct Stu s[] = { {"zhangsan",18},{"lisi",20},{"wangwu",19} };
	int sz = sizeof(s) / sizeof(s[0]);
	//printf("%d",sz);
	qsort(s, sz, sizeof(s[0]), cmp_Stu_name);
	for (int i = 0; i < sz; i++)
	{
		printf("%c ", s[i]);
	}
}
int main()
{

	test1();
	test2();
	test3();
}
*/