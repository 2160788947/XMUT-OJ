#include<stdio.h>
int main()
{
	int r, w, b,i,k,l,cnt=0;
	scanf("%d %d %d", &r, &w, &b);
	for(i=0;i<=r;i++)
		for(k = 0;k <= w; k++)
			for (l = 0;l <= b; l++)
			{
				if ((i + k + l) == 10)
				{
					cnt++;
				}
			}
	printf("%d", cnt);
	return 0;
}