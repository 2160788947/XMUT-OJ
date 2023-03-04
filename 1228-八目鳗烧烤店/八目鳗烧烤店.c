#include <stdio.h>

int main()
{
	int i, a = 1;
	for (i = 1;i < 6;i++)
	{
		a <<= 1;
	}
	printf("%d\n",a);
	return 0;
}
//数学
//六个一样的苹果，排成一排，之间有5个空。想像按吃的天数用隔板把它们分成每天不同的数量。
//6天，相当用5个插板插入5个空中，苹果分成了6份：C（5，5） = 1
//5天，相当用4个插板插5个空，苹果分成了5份：C（5，4） = 5
//（这也不难理解：有一天是2个苹果，可以第1、2、3、4、5中的某一天吃）
//4天，C（5，3） = 10
//3天，C（5，2） = 10
//2天，C（5，1） = 5
//1天，C（5，0） = 1

//递归写法
//#include<stdio.h>
//int count(int n)
//{
//	int i,sum=0;
//	if (n == 0) return 1;
//	for (i = 1; i <= n; i++)
//	{
//		sum+=count(n-i);
//	}
//	return sum;
//}
//int main()
//{
//	printf("%d\n", count(4));
//	return 0;
//}