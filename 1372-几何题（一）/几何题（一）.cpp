#include<stdio.h>
double f(double x1, double y1, double x2, double y2, double x0, double y0)
{
	return (x2 - x1) * (y0 - y1) - (y2 - y1) * (x0 - x1);
}
int main()
{
	int t;
	double x1, x2, x3, x4, x0, y1, y2, y3, y4, y0;
	scanf("%d", &t);
	while (t--)
	{
		scanf("%lf%lf%lf%lf%lf%lf%lf%lf%lf%lf", &x1, &y1, &x2, &y2, &x3, &y3, &x4, &y4, &x0, &y0);
		if (f(x1, y1, x2, y2, x0, y0) * f(x3, y3, x4, y4, x0, y0) >= 0 && f(x2, y2, x3, y3, x0, y0) * f(x4, y4, x1, y1, x0, y0) >= 0)
			printf("T\n");
		else
			printf("F\n");
	}
	return 0;
}