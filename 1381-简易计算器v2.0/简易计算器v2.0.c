#include<stdio.h>
int main()
{
	int z1, m1, z2, m2,z,m,i;
	scanf("%d%d%d%d", &z1, &m1, &z2, &m2);
	z = z1 * m2 + z2 * m1;
	m = m1 * m2;
    for (i = 2;i < m;i++)
    {
        while (z % i == 0 && m % i == 0)
        {
            z /= i;
            m /= i;

        }
    }
	printf("%d/%d", z, m);
	return 0;
}