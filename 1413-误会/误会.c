#include<stdio.h>
int main()
{
	int n, t,i,cnt;
	scanf("%d", &t);
	while (t--)
	{
		int money[26] = { 0,1,0,1 };
		scanf("%d", &n);
		cnt = 0;
		for (i = 4;i <= n;i++)
		{
			if (money[i/2]==0||i%2!=0)
				money[i]++;
		}
		for (i = 1;i <= n;i++)
		{
			if (money[i] == 1)
				cnt++;
		}
		printf("%d\n", cnt);
	}
	return 0;
}