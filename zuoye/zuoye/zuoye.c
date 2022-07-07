//#include<stdio.h>
//void average(int s[10])//求平均分
//{
//	int count = 0;
//	for (int i = 0; i < 10; i++)
//	{
//		count += s[i];
//	}
//	int ret = count / 10;
//	printf("平均分为：%d\n", ret);
//}
//void sort(int s[10])//排序 冒泡排序
//{
//	int i,j;
//	for (int i = 0; i < 9; i++)
//	{
//		for (int j = 0; j < 10-1-i; j++)
//		{
//			if (s[j] < s[j + 1])//交换
//			{
//				int tmp = s[j];
//				s[j] = s[j + 1];
//				s[j + 1] = tmp;
//			}
//		}
//	}
//	printf("成绩从大到小依次排序为:");
//	for (int i = 0; i <= 9; i++)
//	{
//		printf("%d ",s[i]);
//	}
//}
//
//int main()
//{
//	int s[10] = {0};//成绩
//	int i = 0;
//	printf("请输入成绩\n");
//	for (int i = 0; i < 10; i++)
//	{
//		printf("%d.", i + 1);
//		scanf_s("%d", &s[i]);
//	}
//	//输入完成后 s[10]储存了10个学生的成绩
//	average(s);
//	sort(s);
//	return 0;
//}
//
//void champion(int a[3][4])
//{
//	int s[3];//s代表小明小强小梅
//	int max = 0;
//	for (int i = 0; i < 3; i++)//计算
//	{
//		a[i][3] = a[i][0] + a[i][1] + a[i][2];
//		s[i] = a[i][3];
//	}
//	//2.遍历出s数组中最大的元素并将他的下角标打印出来
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
//		printf("小明是冠军");
//	}
//	if (max == 1)
//	{
//		printf("小强是冠军");
//	}
//	if (max == 2)
//	{
//		printf("小梅是冠军");
//	}
//}
//int main()
//{
//	int a[3][4];
//	char name[3][5] = { "小明","小强","小梅" };
//	for (int i = 0; i < 3; i++)
//	{
//		printf("请依次输入%s 葡萄 鸭梨 桃子 的重量:", name[i]);	
//		for (int j = 0; j < 3; j++)
//		{
//			scanf_s("%d", &a[i][j]);
//		}
//	}
//	champion(a);
//	return 0;
//}

//在唱歌等大奖赛评分时，一般要有若干名评委，记分规则为：去掉一个最高分，去
//掉一个最低分，再算平均分。设按百分制计分，试设计一个算分程序。

//分析：程序中用sum存放总分，average存放平均分，max存放最高分，min存放最低分，
//n存放评委人数，score存放评委的评分，i记录输入的分数个数。
//由于评委打分的最低分不会小于0，最高分不会大于100，所以max的初值赋为0，
//min的初值赋为100，当每输入一个评委打分时，都要与max比较一次，与min比较一次
//，并将评委打分累加到sum中。当评委打分大于max时，max的新值为评委打分，否则其值不变
//；当评委打分小于min时，min的新值为评委打分，否则其值不变。
//比较过程一直进行到所有评委打分输入完毕，才能计算出average，
//最后输出max的值、min的值以及average的值。
//int main()
//{
//	int sum = 0, average = 0, n = 0, score = 0, max = 0, min = 0;
//	printf("请输入评委个数");
//	scanf_s("%d", &n);
//	for (int i = 0; i < n; i++)
//	{
//		printf("请输入分数");
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
//	printf("平均分为：%d", average);
//	return 0;
//}