#include<stdio.h>
int main()
{
	int n[1024] = {0}, l, i, k, h, cnt = 1, l_,t=1;
	scanf("%d %d", &i,&l);
	l_ = l;
	for (k = 0;k < i;k++)
	{
		scanf("%d", &n[k]);
	}
	for (h = 1;h < i;h++)
	{
		if (l_ >= n[h] - n[h - 1])
		{
			l_ -= n[h] - n[h - 1];
			cnt++;
			if (t < cnt)
				t = cnt;
			if (l_ <= 0)
			{
				l_ = l;
				cnt = 1;
			}
		}
	}
	printf("%d",t);
	return 0;
}