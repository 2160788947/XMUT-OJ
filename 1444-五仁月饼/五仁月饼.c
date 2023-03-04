#include<stdio.h>
int main()
{
	int n, m,cnt=0;
	scanf("%d %d", &n, &m);
	for (;m >= 3;m-=3)
	{
		if (n >= 2)
		{
			n -= 1;
			cnt++;
		}
	}
	for (;n >= 3;n -= 3)
	{
		n++;
		cnt++;
	}
	printf("%d", cnt);
	return 0;
}