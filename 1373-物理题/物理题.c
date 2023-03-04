#include<stdio.h>
int main()
{
	int m,t,x,y,k,cnt;
	scanf("%d", &t);
	while (t--)
	{
		cnt = 0;
		scanf("%d %d %d %d", &m, &k, &x, &y);
		for (k+=m;m <= 800&&k<=800;m += y,k+=x)
		{
			if (m>=k)
			{
				cnt = 1;
				break;
			}
		}
		if (cnt == 1)
			printf("T\n");
		else
			printf("F\n");
	}
	return 0;
}