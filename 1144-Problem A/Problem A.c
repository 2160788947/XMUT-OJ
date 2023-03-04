#include<stdio.h>
int main()
{
	int t,i,cnt=0;
	char lim[75] = { '0','.' };
	for (i = 2;i < 22;i++)
	{
		lim[i] = '9';
	}
	scanf("%d", &t);
	while(t--)
	{
		char num[200] = {0};
		cnt = 0;
		scanf("%s", num);
		for (i = 2;i<22;i++)
		{
			if (num[i] == '9')
				cnt++;
			if (cnt == 20)
			{
				i++;
				while (num[i] != '\0')
				{
					if (num[i++] > '0')
						cnt++;
				}
			}
		}
		if (cnt > 20)
			printf("Yes\n");
		else
			printf("No\n");
	}
	return 0;
}