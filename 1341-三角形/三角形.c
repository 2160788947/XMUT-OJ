#include<stdio.h>
int main()
{
	int l[4],cnt=0,i,j,k;
	for (i = 0;i < 4;i++)
		scanf("%d", &l[i]);
	for(i=0;i<4;i++)
		for(j=i+1;j<4;j++)
			for (k = j + 1;k < 4;k++)
			{
				if (l[i] + l[j] > l[k] && l[i] + l[k] > l[j] && l[k] + l[j] > l[i])
					cnt = 1;
			}
	if (cnt == 1)
		printf("YES");
	else
		printf("NO");
	return 0;
}