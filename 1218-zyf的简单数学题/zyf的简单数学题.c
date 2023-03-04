#include<stdio.h>
int main()
{
	int x,n,t,i;
	int a[10][4] = { {0},{1},{6,2,4,8},{1,3,9,7},{6,4},
	{5},{6},{1,7,9,3},{6,8,4,2},{1,9} };
	scanf("%d", &n);
	while (n--)
	{
		scanf("%d", &t);
		switch (t % 10)
		{
		case 0:
		case 1:
		case 5:
		case 6:
			x = a[t % 10][0];
			break;
		case 2:
		case 3:
		case 7:
		case 8:
			x = a[t% 10][t% 4];
			break;
		case 4:
		case 9:
			x = a[t % 10][t % 2];
			break;
		}
		printf("%d\n", x);
	}
	return 0;
}
