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
//int main()//1.strcmp �ȽϵĲ��������ַ����ĳ��ȣ�����ascil��ֵ����str1��str2��ʼÿ���ַ����αȽϣ�������һ���ľͷ���ֵ
//{
//	char arr1[20] = "zhangsan12";
//	char arr2[] = "zhangsan1";
//	int ret = my_strcmp(arr1, arr2);
//	//int ret = strcmp(arr1, arr2);
//	printf("%d", ret);
//	//�Ƚ������ַ����Ƿ����
//	//int strcmp(const char *string1, const char *string2);
//	//���str1<str2 ����һ��С��0����
//	//���str1>str2 ����һ������0���� ��ȷ���0
//	return 0;
//}

//char *strstr( const char *str1, const char *str2 );
//��str1��Ѱ����û��str2����Ӵ� �ҵ��˷��ص�ַ �Ҳ������ؿ�ָ��

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
//		while (*s1 != '\0'&& *s2 != '\0' && *s1 == *s2)//ֻ���������������Ż����ѭ�� �������ѭ����Ҫô��s1������s2 Ҫô��s1������ Ҫô��s2������ s1������˵��û�ҵ� s2������˵���ҵ���
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
//int main()//strstr�ַ��� �����ַ���
//
//{
//	char email[] = "abcdefg";
//	char substr[] = "cde";
//	char* ret = strstr(email, substr);
//	if (ret == NULL)
//	{
//		printf("û�ҵ�");
//	}
//	else {
//		printf("%s\n",ret);
//	}
//	return 0;
//}
//���������Ƶ��ַ��� 
//strncpy
//strncat ׷�� ĩβ��+һ��\0
//strncmp ����һ��num���� ���������ֽ���


//strtok �и��ַ�������
//cola333top@qq.com
//char * strtok(char * str, const char * sep); ����1 �ַ��� ����2 �ָ��
//һ��strtok����ı�ԭ��������ݣ�����һ���ÿ���������������
//int main()
//{
//	const char* sep = "@.";//�ָ��
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

//C���Կ⺯��ִ��ʧ��ʱ�����ô�����
//char* strerror(int errnum);
//errno C�������õ�һ��ȫ�ֵĴ������ŵı���
//int main()//strerror ���ش���������Ӧ����Ϣ
//{
//	printf("%s\n", strerror(0));
//	printf("%s\n", strerror(1));
//	printf("%s\n", strerror(2));
//	printf("%s\n", strerror(3));
//	printf("%s\n", strerror(4));
//	printf("%s\n", strerror(5));
//	return 0;
//}

//memcpy-�ڴ濽��
//void * memcpy ( void * dest, const void * src, size_t num );
//�Ѳ���2��ֵ�ŵ�����1���num���ֽ�

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
	//1.��dest srcǿת+������
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