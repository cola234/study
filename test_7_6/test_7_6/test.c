#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
#include<string.h>
#include<assert.h>
//int my_strcmp(const char *str1, const char *str2)
//{
//	assert(str1 && str2);
//	while (*str1 == *str2)
//	{
//		if (*str1 == '\0')
//		{
//			return 0;
//		}
//		str1++;
//		str2++;
//	}
//	return *str1 - *str2;
//}
//int main()//1.strcmp 比较的不是两个字符串的长度，而是ascil码值，从str1和str2开始每个字符依次比较，遇到不一样的就返回值
//{
//	char arr1[20] = "zhangsan12";
//	char arr2[] = "zhangsan1";
//	int ret = my_strcmp(arr1, arr2);
//	//int ret = strcmp(arr1, arr2);
//	printf("%d", ret);
//	//比较两个字符串是否相等
//	//int strcmp(const char *string1, const char *string2);
//	//如果str1<str2 返回一个小于0的数
//	//如果str1>str2 返回一个大于0的数 相等返回0
//	return 0;
//}

//char *strstr( const char *str1, const char *str2 );
//在str1里寻找有没有str2这个子串 找到了返回地址 找不到返回空指针

//char* my_strstr(const char* str1, const char*str2)
//{
//	assert(str1&&str2);
//	const char* s1 = str1;
//	const char* s2 = str2;
//	const char* p = str1;
//	while (*p)
//	{
//		s1 = p;
//		s2 = str2;
//		while (*s1 != '\0'&& *s2 != '\0' && *s1 == *s2)//只有满足三个条件才会进入循环 如果跳出循环，要么是s1不等于s2 要么是s1走完了 要么是s2走完了 s1走完了说明没找到 s2走完了说明找到了
//		{
//			s1++;
//			s2++;
//		}
//		if (*s2 == '\0')
//		{
//			return p;
//		}
//		p++;
//	}
//	return NULL;
//}
//char* my_strstr(const char* dest, const char* src)
//{
//	char* s1 = dest;
//	char* s2 = src;
//	char* p = dest;
//	while (*p)
//	{
//		s1 = p;
//		s2 = src;
//		while (dest!='\0' && src!='\0' && *s1 == *s2)
//		{
//			s1++;
//			s2++;
//		}
//		if (dest == '\0')
//		{
//			return NULL;
//		}
//		p++;
//	}
//	return p;
//}
//int main()//strstr字符串 查找字符串
//
//{
//	char email[] = "abcdefg";
//	char substr[] = "cde";
//	char* ret = strstr(email, substr);
//	if (ret == NULL)
//	{
//		printf("没找到");
//	}
//	else {
//		printf("%s\n",ret);
//	}
//	return 0;
//}
//长度受限制的字符串 
//strncpy
//strncat 追加 末尾会+一个\0
//strncmp 多了一个num参数 用来限制字节数


//strtok 切割字符串函数
//cola333top@qq.com
//char * strtok(char * str, const char * sep); 参数1 字符串 参数2 分割符
//一般strtok都会改变原数组的数据，所以一般用拷贝的数据来操作
//int main()
//{
//	const char* sep = "@.";//分割符
//	char arr[] = "cola333top@qq.com";
//	char arr2[50] = { 0 };
//	strcpy(arr2, arr);
//	char* ret = 0;
//	for (ret = strtok(arr2,sep); ret != NULL; ret=strtok(NULL,sep))
//	{
//		printf("%s \n", ret);
//	}
//	return 0;
//}

//C语言库函数执行失败时会设置错误码
//char* strerror(int errnum);
//errno C语言设置的一个全局的错误码存放的变量
//int main()//strerror 返回错误码所对应的信息
//{
//	printf("%s\n", strerror(0));
//	printf("%s\n", strerror(1));
//	printf("%s\n", strerror(2));
//	printf("%s\n", strerror(3));
//	printf("%s\n", strerror(4));
//	printf("%s\n", strerror(5));
//	return 0;
//}

//memcpy-内存拷贝
//void * memcpy ( void * dest, const void * src, size_t num );
//把参数2的值放到参数1里，放num个字节

//void* my_memcpy(void* dest, const void* src, size_t num)
//{
//	assert(dest && src);
//	void* ret = dest;
//	while (num--)
//	{
//		*((char*)dest) = *((char*)src);
//		dest = (char*)dest + 1;
//		src = (char*)src + 1;
//	}
//	return ret;
//}
void* my_memcpy(void* dest, const void* src, size_t num)
{
	assert(dest&&src);
	void* ret = dest;
	//1.将dest src强转+解引用
	while (num--)
	{
		*((char*)dest) = *((char*)src);
		dest = (char*)dest+1;
		src = (char*)src+1;
	}
	return ret;
}
int main()
{
	int arr1[] = { 1,2,3,4,5,6,7 };
	int arr2[10] = { 0 };
    memcpy(arr2, arr1, 28);
	for (size_t i = 0; i < 10; i++)
	{
		printf("%d ", arr2[i]);
	}
	return 0;
}