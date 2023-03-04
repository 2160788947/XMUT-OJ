#include<stdio.h>
int main()
{
	int t;
	double xa, xb, xp, ya, yb, yp,x,y;
	scanf("%d", &t);
	while (t--)
	{
		scanf("%lf%lf%lf%lf%lf%lf", &xa, &ya, &xb, &yb, &xp, &yp);
		x = (xp * (xa - xb) * (xa - xb) + yp * (ya - yb) * (xa - xb) + (xb * ya - xa * yb) * (ya - yb)) / ((xa - xb) * (xa - xb) + (ya - yb) * (ya - yb));
		y= (xp * (xa - xb) * (ya - yb) + yp * (ya - yb) * (ya - yb) + (xa * yb - xb * ya) * (xa - xb)) / ((xa - xb) * (xa - xb) + (ya - yb) * (ya - yb));
		printf("%.2lf %.2lf\n",x,y);
	}
	return 0;
}