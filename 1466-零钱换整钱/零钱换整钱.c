#include<stdio.h>
int main()
{
	int i, j, k;
	for (i = 1;i < 100;i++)
	{
		for (j = 1;j < 100;j++)
		{
			for (k = 1;k < 100;k++)
			{
				if (i * 18 == j * 15 && j * 15 == k * 20)
				{
					if ((k * 10 + j * 5 + i * 1) % 100 == 0)
					{
						printf("%d,%d,%d,%d\n", i, j, k, (k * 10 + j * 5 + i * 1) / 10);
						return 0;
					}
				}
			}
		}
	}
	return 0;
}