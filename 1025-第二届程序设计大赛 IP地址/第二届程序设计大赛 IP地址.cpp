#include<stdio.h>
#include<stdlib.h>
int main()
{
	int n,i,h;
	char c[4][9] = {0};
	scanf("%d", &n);
	while (n--)
	{
		for (i = 0;i < 4;i++)
		{
			scanf("%8s", &c[i]);
		}
		for (i = 0;i < 4;i++)
		{
			h = strtol(c[i], NULL, 2);
			printf("%d", h);
			if (i == 3)
			{
				printf("\n");
			}
			else
			{
				printf(".");
			}
		}
	}

	return 0;
}
