#include<stdio.h>
int main()
{
	int n, blood_contract, blood_relax, cnt = 0, i = 0, time[100] = {0}, j;
	scanf("%d", &n);
	while(n--)
	{
		scanf("%d %d", &blood_contract, &blood_relax);
		if ((blood_contract <= 140 && blood_contract >= 90) && (blood_relax >= 60 && blood_relax <= 90))
		{
			cnt++;
			time[i++] = cnt;
		}
		else
		{
			cnt = 0;
		}
	}
	for(n=0;n<i-1;n++)
		for (j = n + 1;j < i;j++)
		{
			if (time[n] < time[j])
			{
				cnt = time[n];
				time[n] = time[j];
				time[j] = cnt;
			}
		}
	printf("%d", time[0]);
	return 0;
}