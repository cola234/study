#include<stdio.h>
#include<assert.h>
//int strcmp(const char *string1, const char *string2);
/*
返回值int 比较ascil码值
*/
//int my_strcmp(const char* str1, const char* str2)
//{
//	assert(str1 && str2);//确保两个不为空指针
//	while (*str1 == *str2)
//	{
//		if (*str1 == '\0')//一旦str1++到/0仍然进入循环 说明他们一样大
//		{
//			return 0;
//		}
//		str1++;
//		str2++;
//	}
//	return *str1 - *str2;
//}

//int main()//模拟实现strcmp
//{
//	char arr1[] = "abcdef\0";
//	char arr2[] = "abcdef\0";
//	int ret = strcmp(arr1, arr2);
//	if (ret > 0)
//	{
//		printf("arr1大");
//	}
//	else if (ret < 0)
//	{
//		printf("arr2大");
//	}
//	else
//	{
//		printf("相等");
//	}
//}


//char *strstr( const char *string, const char *strCharSet );
//char* my_strstr(const char *str1, const char *str2)
//{
//	assert(str1&&str2);
//	char* s1 = str1;
//	char* s2 = str2;
//	char* p = str1;//用来标记str1
//	while (*p)//当*p标记到\0时仍没找到说明没有这个子串
//	{
//		s1 = p;
//		s2 = str2;
//		while (*s1!='\0'&& *s2!='\0'&& *s1 == *s2)//1.s1找完了仍然没找到，说明找不到
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
//int main()//strstr的模拟实现-字符串查找寻找字串
//{
//	char arr1[] = "abcdedef";
//	char arr2[] = "def";
//	char* ret = my_strstr(arr1, arr2);
//	printf("%s", ret);
//	return 0;
//}

//void* my_memcpy(void* dest, const void* src, size_t count)
//{
//	assert(dest && src);
//	void* ret = dest;
//	1.强类型转换+解引用
//	while (count--)
//	{
//		*((char*)dest) = *((char*)src);
//		dest = (char*)dest+1;
//		src = (char*)src+1;
//	}
//	return ret;
//}
//int main()//模拟实现memcpy-内存拷贝 将参数2的值放入参数1 放num个字节
//{
//	char arr1[] = "abcdedef";
//	char arr2[20] = {0};
//	char* ret = my_memcpy(arr2, arr1, 8);
//	printf("%s", ret);
//}