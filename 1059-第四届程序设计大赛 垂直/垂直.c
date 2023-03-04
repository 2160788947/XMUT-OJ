#include<stdio.h>
int main()
{
	int z[4][2] = { 0 }, cnt = 0, i ,j,k,x1,y1,x2,y2;
	for (i = 0;i < 4;i++) 
	{
		scanf("%d %d", &z[i][0], &z[i][1]);
	}
	for (i = 0;i < 4;i++)
	{
		for (j = i+1;j < 4;j++)
		{
			for (k = j+1;k < 4;k++)
			{
				x1 = z[j][0] - z[i][0];//利用向量相乘为0
				y1 = z[j][1] - z[i][1];
				x2 = z[k][0] - z[i][0];
				y2 = z[k][1] - z[i][1];
				if ((x1 * x2 - y1 * y2) == 0)
				{
					cnt = 1;
				}
			}
		}
	}
	if (cnt == 1)
		printf("YES");
	else
		printf("NO");
	return 0;
}