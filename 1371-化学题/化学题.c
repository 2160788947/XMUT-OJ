#include<stdio.h>
int main()
{
	int t,n,sum;
	char c[100];
	scanf("%d", &t);
	while (t--)
	{
		scanf("%s", c);
		sum = 0;
		for (n = 0;c[n] != '\0';n++)
		{
			if (c[n] == 'C')
				sum += 12;
			else if (c[n] == 'H')
				sum += 1;
			else if (c[n] == 'O')
				sum += 16;
		}
		printf("%d\n", sum);
	}
	return 0;
}