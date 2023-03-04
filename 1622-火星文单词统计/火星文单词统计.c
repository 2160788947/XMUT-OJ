#include<stdio.h>
int main()
{
	int i,cnt=0;
	char c[80];
	gets(c);
	for (i = 0;c[i] != '\0';i++)
	{
		if ((c[i] >= 'A') && (c[i] <= 'Z') || (c[i] >= 'a') && (c[i] <= 'z'))
		{
			if ((c[i + 1] >= 'A') && (c[i + 1] <= 'Z') || (c[i + 1] >= 'a') && (c[i + 1] <= 'z'))
			{
			}
			else
				continue;
			cnt++;
			for (;(c[i] >= 'A') && (c[i] <= 'Z') || (c[i] >= 'a') && (c[i] <= 'z');i++);
		}
	}
	printf("%d", cnt);
	return 0;
}