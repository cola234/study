#include<stdio.h>
void Swap(char* buf1, char* buf2, int width)
{
	int tmp = 0;
	tmp = *buf1;
	*buf1 = *buf2;
	*buf2 = tmp;
	buf1++;
	buf2++;
}
void my_qsort(void* base, int sz, int width, int(*cmp)(const void* e1, const void* e2))
{
	for (int i = 0; i < sz-1; i++)
	{
		int flag = 1;
		for (int j = 0; j < sz - 1 - i; j++)
		{
			//��������ֵ��base ����ǿתΪchar*������+width*i
			int ret = cmp((char*)base +j*width, (char*)base +(j+1)*width);//����һ������0�������ʾe1>e2 �ͽ���
			if (ret > 0)
			{
				Swap((char*)base + j * width, (char*)base + (j + 1)*width, width);
				flag = 0;
			}
		}
		if (flag == 1)
		{
			break;
		}
	}

}
int cmp_int(const void* e1, const void* e2)
{
	return (*(int*)e1 - *(int*)e2);
}
int main()
{
	int arr[] = { 10,9,8,7,6,5,4,3,2,1 };
	int sz = sizeof(arr) / sizeof(arr[0]);
	my_qsort(arr,sz,sizeof(arr[0]),cmp_int);
	for (int i = 0; i < sz; i++)
	{
		printf("%d ", arr[i]);
	}
	return 0;
}