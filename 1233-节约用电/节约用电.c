#include<stdio.h>
int main()
{
	int n,i,k,l,cnt=0;
	scanf("%d", &n);
	for (i = 1;i < n-1;i++)
	{
		for (k = i;k < n-1;k++)
		{
			for (l = k;l < n-1;l++)
			{
				if ((l - 1 != k) && (k - 1 != i)&&i!=k&&k!=l&&l!=i)
				{
					cnt++;
				}
			}
		}
	}
	printf("%d", cnt);
	return 0;
}