#include<stdio.h>
int main()
{
	double H, h, x, y, s,t;
	int n;
	scanf("%d", &n);
	while (n--)
	{
		scanf("%lf %lf %lf %lf", &s, &H, &x, &y);
		t = s / x;
		h = y * t - 0.5 * 10 * t * t;
		if (h >= H)
			printf("P\n");
		else
			printf("F\n");
	}
	return 0;
}