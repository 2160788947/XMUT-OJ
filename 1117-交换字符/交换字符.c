#include<stdio.h>
int main()
{
	int i,t,k;
	char c[80];
	gets(c);
	for (i=0;;)
	{
		if (c[i] >= '0' && c[i] <= '9')
		{
			t = c[i];
			for (k = i+1;c[k] != '\0';k++)
			{
				c[k-1] = c[k];
			}
			c[k-1] = t;
		}
		else 
		{
			break;
		}
	}
	printf("%s", c);
	return 0;
}