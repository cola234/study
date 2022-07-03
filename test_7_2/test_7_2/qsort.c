#include<stdio.h>
#include<string.h>
//冒泡排序 解决只能排序整形的问题
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
void bubblesortpro(void* base, int sz, int width, int(*cmp)(const void* e1, const void* e2))//高级版本的冒泡排序，可以排所有类型的数据，相当于qsort
{
	for (int i = 0; i < sz - 1; i++)
	{
		int flag = 1;
		for (int j = 0; j < sz - 1 - i; j++)
		{
			//比较两个数 调用cmp函数，传入两个值，传回来一个值表示大小
			if (cmp((char*)base + j * width, (char*)base + (j + 1)*width) > 0)//也就是e1>e2
			{
				Swap((char*)base + j * width, (char*)base + (j + 1)*width,   width);//交换  传过去两个数据的位数和宽度
				flag = 0;
			}
		}
		if (flag == 1)
		{
			break;
		}
	}
}

//qsort 快排 可以排任意类型的数据

//void qsort( void* base,//要排序的数据的起始位置
//			size_t num,//待排序的数据元素有几个
//			size_t width,//待排序的数据元素 的大小
//			int(*cmp)(const void* e1, const void* e2)//函数指针 e1 e2是你要比较的两个元素的地址 cmp是你比较的函数
//)
//{
//	;
//}
//比较两个整形元素
/*
qsort中对于cmp比较函数的规定，如果e1<e2 return一个<0的数
如果e1 = e2 return 0
如果e1 > e2 return一个>0的数 
*/
struct Stu
{
	char name[30];
	int age;
};
int cmp_int(const void* e1, const void* e2)//如果是e1 - e2是升序排
{
	return (*(int*)e1 - *(int*)e2);//将void*强转为int*类型
}

int cmp_struct_name(const void* e1, const void* e2)
{
	//这里排序的是他的名字的顺序
	//strcmp返回的值是＞0 ＜0 ＝0的数 作用是字符串比较
	strcmp(((struct Stu*)e1)->name, ((struct Stu*)e2)->name);//将e1强转为结构体指针
}

int cmp_struct_age(const void* e1, const void* e2)
{
	return((struct Stu*)e1)->age-((struct Stu*)e2)->age;//将e1强转为结构体指针
}


void test1()//排序整数
{
	int arr[] = { 10,9,8,7,6,5,4,3,2,1 };
	int sz = sizeof(arr) / sizeof(arr[0]);
	qsort(arr, sz, sizeof(arr[0]), cmp_int);//库函数
	//void*是无具体类型的指针，可以接收任意类型的地址
	//但是不能进行解引用操作，也不能进行加减整数的操作
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
	//test2();//排序结构体
	test3();
    return 0;
}