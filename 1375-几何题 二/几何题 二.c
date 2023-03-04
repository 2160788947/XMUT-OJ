#include <stdio.h>
#include <math.h>
#define PI 3.14159265

int main()
{
    int n;
    double x1, x2, y1, y2, k, x, y, a;
    scanf("%d", &n);
    while (n--)
    {
        scanf("%lf%lf%lf%lf%lf", &x1, &y1, &x2, &y2, &k);
        a = k * PI / 180;
        x = (y1 - y2) * sin(a) + (x1 - x2) * cos(a) + x2;
        y = (y1 - y2) * cos(a) + (x2 - x1) * sin(a) + y2;
        printf("%.2lf %.2lf\n", x, y);
    }
    return 0;
}