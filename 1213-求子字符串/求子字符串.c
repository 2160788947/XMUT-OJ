#include<stdio.h>
int main()
{
	int begin, end,k,i;
	char c[70];
	scanf("%s", c);
	scanf("%d %d", &begin, &end);
	k = end - begin+1;
	if (begin < 1)
		begin = 1;
	if (end > strlen(c))
		end = strlen(c);
	for (i = 0;i < k;i++)
	{
		c[i] = c[begin - 1 + i];
	}
	c[k] = '\0';
	printf("%s", c);
	return 0;
}