#include<stdio.h>
#include<math.h>
int main()
{
	int r, a, n, blood = 100;
	double x_boss, y_boss, x, y, l;
	scanf("%lf %lf", &x_boss, &y_boss);
	scanf("%d %d %d",&r,&a,&n);
	while(n--)
	{
		scanf("%lf %lf", &x, &y);
		l = sqrt((x_boss - x) * (x_boss - x) + (y_boss - y) * (y_boss - y));
		if (l <= r)
		{
			blood -= a;
		}
	}
	if (blood < 0)
		blood = 0;
	printf("%d", blood);
	return 0;
}