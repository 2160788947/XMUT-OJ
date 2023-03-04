#include<stdio.h>
int main()
{
	int time[300] = {0}, num[300] = { 0 }, n, i, k = 0;
	scanf("%d", &n);
	for (i = 0;i < n;i++)
	{
		scanf("%d %d", &num[i], &time[i]);
	}
	for (i = 0;i < n-1;i++)
	{
		if (num[i] < num[i + 1])
		{
			k = i + 1;
		}
	}
	for (i = 0;i < n;i++)
	{
		if (num[k] == num[i])
		{
			if (time[k] > time[i])
			{
				k = i;
			}
		}
	}
	printf("%d %d", num[k],time[k]);
	return 0;
}
//#include<stdio.h>
//int main()
//{
//	int num, time, n, num_1, time_1,i;
//	scanf("%d", &n);
//	scanf("%d %d", &num, &time);
//	for (i = 0;i < n-1;i++)
//	{
//		scanf("%d %d", &num_1, &time_1);
//		if (num < num_1)
//		{
//			num = num_1;
//			time = time_1;
//		}
//		else if (num == num_1)
//		{
//			if (time > time_1)
//			{
//				time = time_1;
//			}
//		}
//	}
//	printf("%d %d", num, time);
//	return 0;
//}