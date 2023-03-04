#include<stdio.h>
int main()
{
	int n, d,f,t=0,cnt=0;
	scanf("%d %d", &n, &d);
	while (n--)
	{
		scanf("%d", &f);
		if (f == 1)
		{
			t = 0;
		}
		else if (f == 0)
		{
			t++;
		}
		if (t == d)
		{
			cnt++;
			t = 0;
		}
	}
	printf("%d", cnt);
	return 0;
}