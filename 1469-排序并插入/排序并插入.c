#include<stdio.h>
int main()
{
	int num[10] = {0},i,j,t;
	scanf("%d,%d,%d,%d,%d,%d,%d,%d,%d", &num[0], &num[1], &num[2], &num[3], &num[4], &num[5], &num[6], &num[7], &num[8]);
	scanf("%d", &num[9]);
	for (i = 1;i <= 9;i++)
	{
		for (j = 0;j < 10 - i;j++) 
		{
			if (num[j] > num[j + 1]) //比较大小并交换
			{
				t = num[j];
				num[j] = num[j + 1];
				num[j + 1] = t;
			}
		}
	}
	for (i = 0;i < 10;i++)
	{
		printf("%d", num[i]);
		if (i != 9)
			printf(",");
	}
	return 0;
}