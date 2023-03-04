#include<stdio.h>
int main()
{
	int birth, time,sum=0,day=365,num;
	scanf("%d,%d", &birth, &time);

	for (;birth < time;birth++)
	{
		if ((birth % 4 == 0 && birth % 100 != 0) || (birth % 4 == 0 && birth % 400 == 0))
		{
			num = 366 * 24 * 60 * 75;
		}
		else
		{
			num = 365 * 24 * 60 * 75;
		}
		sum += num;
	}
	printf("%d", sum);
	return 0;
}