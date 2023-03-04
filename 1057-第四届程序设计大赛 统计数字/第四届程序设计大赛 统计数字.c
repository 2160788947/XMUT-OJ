#include<stdio.h>
int main()
{
	int n, i, t, k, cnt[10] = { 0 };
	scanf("%d", &n);
	for (i = 1;i <= n;i++)
	{
		t = i / 10;
		k = i % 10;
		if (t > 0&&t<10)
		{
			cnt[t]++;
		}
		cnt[k]++;
	}
	if (n == 100)
	{
		cnt[0]++;
		cnt[1]++;
	}
	for(i = 0;i < 10;i++)
		printf("%d\n", cnt[i]);
	return 0;
}