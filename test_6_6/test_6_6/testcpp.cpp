#define _CRT_SECURE_NO_WARINGS 1
#include<stdio.h> 
#include<string.h>
#include<assert.h>
//int strncmp(const char *string1, const char *string2, size_t count);
//size_tΪ�޷�������
//int main()
//{
//	////strncmp -�ַ����Ƚ�
//	//const char *p1 = "abcdef";//�����ַ������+const �����޸�
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
//	//s1 s2�����ƶ� cur������ǿ�ʼ���ҵ�λ��
//	//1.�Ƚ�p1��p2����Ԫ�� �����һ�� �ƶ�p1
//	//2.�ƶ�p1������� �Ƚ�p1++���p2++���Ƿ�һ��
//	while (*cur)
//	{
//		s1 = cur;//ÿ��s1����cur��ǵ�λ��
//		s2 = p2;//s2����p2����ʼλ��
//		while ((*s1 != '\0') && (*s2 != '\0') && (*s1 == *s2))//��s1 s2 ��Ϊ\0,��s1 == s2ʱ s1 s2ͬʱ++
//		{
//			s1++;
//			s2++;
//		}
//		if (s2 == '\0')//�ҵ���
//		{
//			return cur;
//		}
//		cur++;
//	}
//	return NULL;//�Ҳ���
//}
//int main()
//{
//	const char *p1 = "abcdeafabcdef";
//	const char *p2 = "def";
//	char *ret = my_strstr(p1, p2);
//	if (ret == NULL)
//	{
//		printf("������");
//	}
//	else
//	{
//		printf("%s\n", ret);
//	}
//	return 0;
//}



//strncmp- �Ƚ������ַ��� �����ַ���������������ַ���ȣ���ASCIIֵ��С��Ƚϣ���ֱ�����ֲ�ͬ���ַ�����'\0'Ϊֹ
//int strncmp(const char *string1,const char *string2,size_t count)


//strtok
int main()
{
	char arr[] = "zpw@bitedu.tech";
	char* p = "@.";
	char buf[1024] = { 0 };
	strcpy(buf, arr);
	char *ret = NULL;//��retΪ��ָ�� ��Ϊstrtok�᷵��һ����ָ��
	for (ret = strtok(buf, p); ret != NULL; ret = strtok(NULL, p))//��retһ��ʼ��һ��strtok��һ���и��ĵ�ַ ��ӡ���� ���ret������NULL�������ӡ Ȼ��
	{
		printf("%s\n", ret);
	}
	return 0;
}