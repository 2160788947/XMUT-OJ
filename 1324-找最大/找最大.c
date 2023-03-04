#include<stdio.h>
#include<string.h>
int main()
{
	int i, x, l, h;
	char c[251] = { 0 }, k = 0;
	gets(c);
	for (h = 0;c[h] != '\0';h++)
	{
		if (c[h] > k)
		{
			k = c[h];
		}

	}
	for (x = 0;c[x] != '\0';x++)
	{
		if (c[x] == k)
		{
			i = x;
			for (l = strlen(c)-1;l!=i;l--)
			{
				c[l + 4] = c[l];
			}
			c[l + 1] = 'f';
			c[l + 2] = 'i';
			c[l + 3] = 'n';
			c[l + 4] = 'd';
			x += 4;
		}
	}
	printf("%s", c);
	return 0;
}
