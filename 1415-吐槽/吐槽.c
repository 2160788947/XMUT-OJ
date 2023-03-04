//#include<stdio.h>
//#include<stdlib.h>
//#include<string.h>
//int main()
//{
//	int t,n,l;
//	scanf("%d", &t);
//	while(t--)
//	{
//		char c[1000];
//		scanf("%d", &n);
//		itoa(n, c, 2);
//		l = strlen(c);
//		if (n == 2)
//			l = 1;
//		printf("%d\n", l);
//	}
//	return 0;
//}
#include<stdio.h>
#include<math.h>
int main()
{
	int t,x,i,l;
	scanf("%d", &t);
	while (t--)
	{
		l = 0;
		scanf("%d", &x);
		for (i = 1;i<x;i *= 2)
		{
			l++;
		}
		if (l == 1)
			l = 1;
		printf("%d\n", l);
	}
	return 0;
}