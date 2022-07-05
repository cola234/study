#include <stdio.h>
#include <assert.h>
#include <string.h>
//size_t my_strlen1(const char* str)//1.递归
//{
//	assert(str);
//	while (*str!='\0')
//	{
//		return 1 + my_strlen2(str + 1);
//	}
//	return 0;
//}
//
//size_t my_strlen2(const char* str)//2.计数器
//{
//	assert(str);
//	int count = 0;
//	while (*str++)
//	{
//		count++;
//	}
//	return count;
//}
//
//size_t my_strlen3(const char* str)//3.指针相减
//{
//	assert(str);
//	char* ret = str;
//	while (*str!='\0')
//	{
//		str++;
//	}
//	return str - ret;
//}
//char* my_strcpy(char *str, const char *src)
//{
//	assert(src);
//	char* ret = str;
//	while (*str++ = *src++)
//	{
//		;
//	}
//	return ret;
//}
//char* my_strcat(char *str, const char *src)
//{
//	assert(src);
//	char* ret = str;
//	while (*str!='\0')
//	{
//		str++;
//	}
//	while (*str++ = *src++)
//	{
//		;
//	}
//	return ret;
//}
//int main()
//{
//	char name[50] = "helloworld";
//	char* ret = my_strcat(name, "zhangsan");//追加
//	printf("%s", name);
//}