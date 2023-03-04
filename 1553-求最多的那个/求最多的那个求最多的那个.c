#include<stdio.h>
#include<string.h>
char ch[100][1024] = { 0 };
int main()
{
	int t, m, n,j,i,l,k;
	scanf("%d", &t);
	while (t--)
	{
		memset(ch, 0, sizeof(ch));
		scanf("%d %d", &m, &n);
		for (i = 0; i < m; i++)
		{
			scanf("%s", ch[i]);
		}
		for (j = 0; j < n; j++)
		{
			int arr[4] = { 0 };
			for (i = 0; i < m; i++)
			{
				arr[ch[i][j] - 'A']++;
			}
			l = 0;
			k = 0;
			for (i = 0; i < 4; i++)
			{
				if (l < arr[i])
				{
					l = arr[i];
					k = i;
				}
			}
			printf("%c", k + 'A');
		}
		printf("\n");
	}
	
	return 0;
}
