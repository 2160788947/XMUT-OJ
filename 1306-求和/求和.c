#include<stdio.h>
int main()
{
	int i,t=0,sum=0;
	char c[51] = {0};
	gets(c);
	for (i = 0;c[i] != '\0';i++)
	{
		while(c[i] >= '0' && c[i] <= '9')
		{
			t *= 10;
			t += c[i] - '0';
			i++;
		}
		sum += t;
		t = 0;
	}
	printf("%d", sum);
	return 0;
}