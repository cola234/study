#include<stdio.h>
#include<assert.h>
#include<string.h>
/*
�ж�һ���ַ����Ƿ�Ϊ��һ���ַ�����ת֮��Ľ��
1.��һ���ַ�����n���ַ���ʹ������n-1�� �ó����н��
AABCD
left       right
ABCDA      DAABC
BCDAA      CDAAB
CDAAB      BCDAA
DAABC      ABCDA
2.AABCD ����
1.tmp = str[0]
  str[1]=str[0]
       
int leftRevolve(char str[],char str2[],int sz)//sz = 5
{
	assert(str != 0&&str2 != 0);
	for (int i = 0; i < sz-1; i++)//4��
	{
		int tmp = 0;
		tmp = str[0];
		for (int j = 0; j < sz-1; j++)
		{
			str[j] = str[j + 1];//
		}
		str[sz-1] = tmp;
		int ret = strcmp(str, str2);
		if (ret==0)
		{
			return 1;
		}
	}
	return 0;
}
int main()//�ַ�����ת
{
	char str1[] = "AABCD";
	char str2[] = "BCDAA";
	int sz = sizeof(str1) / sizeof(str1[0]);//6
	int ret = leftRevolve(str1,str2, sz-1);
	if (ret == 1)
	{
		printf("�ַ�������һ���ַ�����ת֮����ַ�����");
	}
	else
	{
		printf("�ַ���������һ���ַ�����ת֮����ַ�����");
	}
	return 0;
}
*/