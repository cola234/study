//#include<stdio.h>
//void average(int s[10])//��ƽ����
//{
//	int count = 0;
//	for (int i = 0; i < 10; i++)
//	{
//		count += s[i];
//	}
//	int ret = count / 10;
//	printf("ƽ����Ϊ��%d\n", ret);
//}
//void sort(int s[10])//���� ð������
//{
//	int i,j;
//	for (int i = 0; i < 9; i++)
//	{
//		for (int j = 0; j < 10-1-i; j++)
//		{
//			if (s[j] < s[j + 1])//����
//			{
//				int tmp = s[j];
//				s[j] = s[j + 1];
//				s[j + 1] = tmp;
//			}
//		}
//	}
//	printf("�ɼ��Ӵ�С��������Ϊ:");
//	for (int i = 0; i <= 9; i++)
//	{
//		printf("%d ",s[i]);
//	}
//}
//
//int main()
//{
//	int s[10] = {0};//�ɼ�
//	int i = 0;
//	printf("������ɼ�\n");
//	for (int i = 0; i < 10; i++)
//	{
//		printf("%d.", i + 1);
//		scanf_s("%d", &s[i]);
//	}
//	//������ɺ� s[10]������10��ѧ���ĳɼ�
//	average(s);
//	sort(s);
//	return 0;
//}
//
//void champion(int a[3][4])
//{
//	int s[3];//s����С��СǿС÷
//	int max = 0;
//	for (int i = 0; i < 3; i++)//����
//	{
//		a[i][3] = a[i][0] + a[i][1] + a[i][2];
//		s[i] = a[i][3];
//	}
//	//2.������s����������Ԫ�ز��������½Ǳ��ӡ����
//	for (int j = 0; j < 2; j++)
//	{
//		if (s[j] > s[j + 1])
//		{
//			max = j;
//		}
//		else
//		{
//			max = j + 1;
//		}
//	}
//	if (max == 0)
//	{
//		printf("С���ǹھ�");
//	}
//	if (max == 1)
//	{
//		printf("Сǿ�ǹھ�");
//	}
//	if (max == 2)
//	{
//		printf("С÷�ǹھ�");
//	}
//}
//int main()
//{
//	int a[3][4];
//	char name[3][5] = { "С��","Сǿ","С÷" };
//	for (int i = 0; i < 3; i++)
//	{
//		printf("����������%s ���� Ѽ�� ���� ������:", name[i]);	
//		for (int j = 0; j < 3; j++)
//		{
//			scanf_s("%d", &a[i][j]);
//		}
//	}
//	champion(a);
//	return 0;
//}

//�ڳ���ȴ�������ʱ��һ��Ҫ����������ί���Ƿֹ���Ϊ��ȥ��һ����߷֣�ȥ
//��һ����ͷ֣�����ƽ���֡��谴�ٷ��ƼƷ֣������һ����ֳ���

//��������������sum����ܷ֣�average���ƽ���֣�max�����߷֣�min�����ͷ֣�
//n�����ί������score�����ί�����֣�i��¼����ķ���������
//������ί��ֵ���ͷֲ���С��0����߷ֲ������100������max�ĳ�ֵ��Ϊ0��
//min�ĳ�ֵ��Ϊ100����ÿ����һ����ί���ʱ����Ҫ��max�Ƚ�һ�Σ���min�Ƚ�һ��
//��������ί����ۼӵ�sum�С�����ί��ִ���maxʱ��max����ֵΪ��ί��֣�������ֵ����
//������ί���С��minʱ��min����ֵΪ��ί��֣�������ֵ���䡣
//�ȽϹ���һֱ���е�������ί���������ϣ����ܼ����average��
//������max��ֵ��min��ֵ�Լ�average��ֵ��
//int main()
//{
//	int sum = 0, average = 0, n = 0, score = 0, max = 0, min = 0;
//	printf("��������ί����");
//	scanf_s("%d", &n);
//	for (int i = 0; i < n; i++)
//	{
//		printf("���������");
//		scanf_s("%d", &score);
//		if (score > max)
//		{
//			max = score;
//		}
//		if (score < min)
//		{
//			min = score;
//		}
//		sum += score;
//	}
//	average = (sum - (min + max))/(n - 2);
//	printf("ƽ����Ϊ��%d", average);
//	return 0;
//}