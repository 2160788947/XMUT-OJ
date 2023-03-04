//#include<stdio.h>
//#include<stdlib.h>
//#include<string.h>
//int main()
//{
//	int t, num, i, k,h;
//	scanf("%d", &t);
//	while (t--)
//	{
//		char l,c[5000];
//		scanf("%d", &num);
//		itoa(num, c, 2);
//		k = strlen(c);
//		if (c[0] == 0)
//		{
//			for (h = 0;c[h] != '\0';h++)
//			{
//				c[h] = c[h + 1];
//			}
//		}
//		for (i = 0;i<strlen(c)/2;i++, k--)
//		{
//			l = c[i];
//			c[i] = c[k-1];
//			c[k-1] = l;
//		}
//		h = strtol(c, NULL, 2);
//		printf("%d\n", h);
//	}
//	return 0;
//}
#include <stdio.h>

int sex(int r, int c)
{
	int i = 1;
	int z = r;
	for (i = 1;i <= c;i++)
	{
		z = z * 2;
	}
	return z;
}
int main()
{
	int k = 0, a, j, i, r, t, c = 0, add = 0, x;
	scanf("%d", &x);
	for (i = 1;i <= x;i++)
	{
		int number[5000] = { 0 };
		scanf("%d", &j);
		int c = 0;
		while (j != 0)
		{
			number[k] = j % 2;
			k++;
			j = j / 2;
		}
		for (a = k-1;a >= 0;a--)
		{
			r = number[a];
			t = sex(r, c);
			c++;
			add = add + t;
		}
		printf("%d\n", add);
		add = 0;
	}
	return 0;
}
