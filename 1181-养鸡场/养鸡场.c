#include<stdio.h>
int main()
{
	int n, l1, l2, k1, k2, j1, j2, cnt = 0,l3,k3,j3;
	scanf("%d ", &n);
	scanf("%d %d", &l1, &l2);
	scanf("%d %d", &k1, &k2);
	scanf("%d %d", &j1, &j2);
	for (l3=l1;l3 <= l2;l3++)
	{
		for (k3=(k1>l3?k1:l3);k3 <= k2;k3++)
		{
			for (j3= (j1 > k3 ? j1 : k3);j3 <= j2;j3++)
			{
				if (l3 + k3 + j3 == n && l3 + k3 > j3 && l3 + j3 > k3 && k3 + j3 > l3)
				{
					cnt++;
				}
			}
		}
	}
	printf("%d", cnt);
	return 0;
}