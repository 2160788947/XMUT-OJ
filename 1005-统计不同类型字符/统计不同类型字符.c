#include<stdio.h>
int main()
{
	int i,c=0,b=0,n=0,l=0;
	char x[100];
	gets(x);//两种输入方式
	//scanf("%[^\n]", x);
	for (i = 0;x[i] != ';';i++)
	{
		if ((x[i] >= 'A' && x[i] <= 'Z') || (x[i] >= 'a' && x[i] <= 'z'))
		{
			c++;
		}
		else if (x[i] == ' ')
		{
			b++;
		}
		else if (x[i] >= '0' && x[i] <= '9')
		{
			n++;
		}
		else
		{
			l++;
		}
	}
	printf("character=%d,blank=%d,digit=%d,other=%d;", c, b, n, l);
	return 0;
}