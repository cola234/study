#include<stdio.h>
#include<assert.h>
/*size_t my_strlen(const char* str)//1.������
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
//size_t my_strlen(const char* str)//2.�ݹ�
//{
//	assert(str);
//	int count = 0;
//	while (*str != '\0')
//	{
//		return 1 + my_strlen(str + 1);
//	}
//	return 0;
//}


//int my_strlen(const char* str)//ָ�������
//{
//	const char* start = str;//�Ѱ�ȫ��const����ָ�뽻����ȫ(const)��ָ��
//	while (*str)
//	{
//		str++;
//	}
//	return str - start;
//}

//int main()//1.ģ��ʵ��strlen
//{
//	//����һ���ַ������� ����\0֮ǰ��Ԫ��֮��
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
//int main()//strcpy��ģ��ʵ��
//{ 
//	//strcpy���ַ�����������һ���ַ�����������һ���ַ�����
//	char name[20] = {0};
//	my_strcpy(name, "zhangsan");//��zhangsan�ŵ�name�� ���\0һ�𿽱���ȥ
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
//	//�ַ���׷��strcat
//
//	//Ŀ��ռ��㹻��
//	//ԭ�ַ�����\0
//	//Ŀ��ռ���޸�
//	char arr1[20] = "hello";
//	char* ret = my_strcat(arr1, "world");
//	return 0;
//}