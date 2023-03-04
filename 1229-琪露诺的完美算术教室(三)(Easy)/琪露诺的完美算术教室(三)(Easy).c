#include<stdio.h>
int main()
{
	long a, b, c, s=1;
	scanf("%d %d %d", &a, &b, &c);
    while (b != 1)
    {
        if (b % 2 == 1)
        {
            s = s * a;
            s = s % c;
        }
        a = a * a;
        a = a % c;
        b = b / 2;
    }
	printf("%d", (s*a)%c);
	return 0;
}