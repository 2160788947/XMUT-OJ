#include<stdio.h>
int main()
{
	int day,n,cnt=0;
	scanf("%d", &n);
	for (day = 1;day <= n;day++)
	{
		if ((day % 7) == 6 || (day % 7) == 0)
		{
			cnt++;
		}
	}
	printf("%d", cnt);
	return 0;
}