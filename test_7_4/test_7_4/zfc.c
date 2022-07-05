#include<stdio.h>
#include<assert.h>
/*size_t my_strlen(const char* str)//1.计数器
{
	assert(str);
	int count = 0;
	while (*str++)
	{
		count++;
	}
	return count;
}
*/
//size_t my_strlen(const char* str)//2.递归
//{
//	assert(str);
//	int count = 0;
//	while (*str != '\0')
//	{
//		return 1 + my_strlen(str + 1);
//	}
//	return 0;
//}


//int my_strlen(const char* str)//指针相减法
//{
//	const char* start = str;//把安全（const）的指针交给安全(const)的指针
//	while (*str)
//	{
//		str++;
//	}
//	return str - start;
//}

//int main()//1.模拟实现strlen
//{
//	//计算一个字符串长度 返回\0之前的元素之和
//	char arr[] = "ab";
//	int len = my_strlen(arr);
//	printf("%d", len);
//	return 0;
//}

//char* my_strcpy(char* dest, const char* src)
//{
//	assert(dest != NULL);
//	assert(src != NULL);
//	char* ret = dest;
//	while (*dest++ = *src++)
//	{
//		;
//	}
//	return ret;
//}
//int main()//strcpy的模拟实现
//{ 
//	//strcpy：字符串拷贝，将一个字符串拷贝到另一个字符串里
//	char name[20] = {0};
//	my_strcpy(name, "zhangsan");//把zhangsan放到name里 会把\0一起拷贝过去
//	return 0; 
//}
//char* my_strcat(char* dest, const char* src)
//{
//	char* ret = dest;
//	while (*dest != '\0')
//	{
//		dest++;
//	}
//	while (*dest++ = *src++)
//	{
//		;
//	}
//	return ret;
//}
//int main()
//{
//	//字符串追加strcat
//
//	//目标空间足够大
//	//原字符串有\0
//	//目标空间可修改
//	char arr1[20] = "hello";
//	char* ret = my_strcat(arr1, "world");
//	return 0;
//}