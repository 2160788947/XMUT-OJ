#include<iostream>
#include<cmath>
using namespace std;

#define pi acos(-1.0)

struct point
{
	int x;
	int y;
	int r;
};

double AREA(point a, point b)
{
	double d = sqrt((a.x - b.x) * (a.x - b.x)*1.0 + (a.y - b.y) * (a.y - b.y)*1.0);
	if (d >= a.r + b.r)
		return 0;
	if (a.r > b.r)
	{
		double tmp = a.r;
		a.r = b.r;
		b.r = tmp;
	}
	if (b.r - a.r >= d)
		return pi * a.r * a.r;
	double ang1 = acos((a.r * a.r + d * d - b.r * b.r) / (2 * a.r * d));
	double ang2 = acos((b.r * b.r + d * d - a.r * a.r) / (2 * b.r * d));
	return ang1 * a.r * a.r + ang2 * b.r * b.r - a.r * d * sin(ang1);
}

int main()
{
	int n;
	scanf("%d", &n);
	point a, b;
	while (n--)
	{
		scanf("%d %d", &a.r, &b.r);
		scanf("%d %d %d %d", &a.x, &a.y, &b.x, &b.y);
		double result = AREA(a,b);
		printf("%lf\n", result);
	}
	return 0;
}