#include<stdio.h>
#include<string.h>
int main()
{	
	int i,l,j,cnt=0;
	char s[105] = { 0 };
	gets(s);
	l = strlen(s);
	for (i = 1; i < l; i++)//i为周期长度,周期最小为1
	{
		for (j=0;j+i < l; j++)
		{
			if (s[j] != s[j + i])//f(x)=f(x+i)即s[j]=s[j+i]
			{
				break;
			}
		}
		if (i + j >= l)
		{
			cnt = i;
			break;
		}
	}
	if (cnt)
	{
		printf("%d", cnt);
	}
	else
	{
		printf("%d", l);
	}
	return 0;
}