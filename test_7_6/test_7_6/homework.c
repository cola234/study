#include<stdio.h>
#include<assert.h>
//int strcmp(const char *string1, const char *string2);
/*
����ֵint �Ƚ�ascil��ֵ
*/
//int my_strcmp(const char* str1, const char* str2)
//{
//	assert(str1 && str2);//ȷ��������Ϊ��ָ��
//	while (*str1 == *str2)
//	{
//		if (*str1 == '\0')//һ��str1++��/0��Ȼ����ѭ�� ˵������һ����
//		{
//			return 0;
//		}
//		str1++;
//		str2++;
//	}
//	return *str1 - *str2;
//}

//int main()//ģ��ʵ��strcmp
//{
//	char arr1[] = "abcdef\0";
//	char arr2[] = "abcdef\0";
//	int ret = strcmp(arr1, arr2);
//	if (ret > 0)
//	{
//		printf("arr1��");
//	}
//	else if (ret < 0)
//	{
//		printf("arr2��");
//	}
//	else
//	{
//		printf("���");
//	}
//}


//char *strstr( const char *string, const char *strCharSet );
//char* my_strstr(const char *str1, const char *str2)
//{
//	assert(str1&&str2);
//	char* s1 = str1;
//	char* s2 = str2;
//	char* p = str1;//�������str1
//	while (*p)//��*p��ǵ�\0ʱ��û�ҵ�˵��û������Ӵ�
//	{
//		s1 = p;
//		s2 = str2;
//		while (*s1!='\0'&& *s2!='\0'&& *s1 == *s2)//1.s1��������Ȼû�ҵ���˵���Ҳ���
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
//int main()//strstr��ģ��ʵ��-�ַ�������Ѱ���ִ�
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
//	1.ǿ����ת��+������
//	while (count--)
//	{
//		*((char*)dest) = *((char*)src);
//		dest = (char*)dest+1;
//		src = (char*)src+1;
//	}
//	return ret;
//}
//int main()//ģ��ʵ��memcpy-�ڴ濽�� ������2��ֵ�������1 ��num���ֽ�
//{
//	char arr1[] = "abcdedef";
//	char arr2[20] = {0};
//	char* ret = my_memcpy(arr2, arr1, 8);
//	printf("%s", ret);
//}