#define _CRT_SECURE_NO_WARINGS 1
#include<stdio.h> 
#include<string.h>
#include<assert.h>
//int strncmp(const char *string1, const char *string2, size_t count);
//size_t为无符号整形
//int main()
//{
//	////strncmp -字符串比较
//	//const char *p1 = "abcdef";//常量字符串最好+const 不被修改
//	//char *p2 = "abcqwer";
//	////int ret = strcmp(p1, p2);
//	//int ret = strncmp(p1, p2,4);
//	//printf("%d\n",ret);
//	return 0;
//}
//char* my_strstr(const char *p1, const char *p2)
//{
//	assert(p1 != NULL);
//	assert(p2 != NULL);
//	char *s1 = p1;
//	char *s2 = p2;
//	char *cur = p1;
//	if (*p2 == '\0')
//	{
//		return (char*)p1;
//	}
//	//s1 s2用来移动 cur用来标记开始查找的位置
//	//1.比较p1和p2的首元素 如果不一样 移动p1
//	//2.移动p1后对上了 比较p1++后和p2++后是否一样
//	while (*cur)
//	{
//		s1 = cur;//每次s1跳回cur标记的位置
//		s2 = p2;//s2跳回p2的起始位置
//		while ((*s1 != '\0') && (*s2 != '\0') && (*s1 == *s2))//当s1 s2 不为\0,且s1 == s2时 s1 s2同时++
//		{
//			s1++;
//			s2++;
//		}
//		if (s2 == '\0')//找到了
//		{
//			return cur;
//		}
//		cur++;
//	}
//	return NULL;//找不到
//}
//int main()
//{
//	const char *p1 = "abcdeafabcdef";
//	const char *p2 = "def";
//	char *ret = my_strstr(p1, p2);
//	if (ret == NULL)
//	{
//		printf("不存在");
//	}
//	else
//	{
//		printf("%s\n", ret);
//	}
//	return 0;
//}



//strncmp- 比较两个字符串 两个字符串自左向右逐个字符相比（按ASCII值大小相比较），直到出现不同的字符或遇'\0'为止
//int strncmp(const char *string1,const char *string2,size_t count)


//strtok
int main()
{
	char arr[] = "zpw@bitedu.tech";
	char* p = "@.";
	char buf[1024] = { 0 };
	strcpy(buf, arr);
	char *ret = NULL;//让ret为空指针 因为strtok会返回一个空指针
	for (ret = strtok(buf, p); ret != NULL; ret = strtok(NULL, p))//让ret一开始赋一个strtok第一次切割后的地址 打印出来 如果ret不等于NULL则继续打印 然后
	{
		printf("%s\n", ret);
	}
	return 0;
}