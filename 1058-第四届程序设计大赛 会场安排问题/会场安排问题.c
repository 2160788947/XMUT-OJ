#include<stdio.h>
int main()
{
	int n,x,y,t=0,cnt=0;
	scanf("%d", &n);
	while(n--)
	{
		scanf("%d %d", &x, &y);
		if (x > t)
		{
			cnt++;
			t = y;
		}
	}
	printf("%d", cnt);
	return 0;
}