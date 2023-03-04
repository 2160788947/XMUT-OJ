#include<iostream>
#include <algorithm>
using namespace std;
int prime(int);
int main()
{
	int n, i, j,cnt;
	int a[12] = { 1,2,3,4,5,6,7,8,9,10,11,12 };
	scanf("%d", &n);
	do
	{
		cnt = 1;
		for (i = 0; i<n-1; i++)
		{
			if (!prime(a[i] + a[i + 1]))
			{
				cnt = 0;
			}
		}
		if (cnt == 1 && prime(a[0] + a[n - 1]))
		{
			for (j = 0; j < n; j++)
			{
				printf("%d", a[j]);
				if (j != n - 1)
					printf(" ");
			}
			printf("\n");
		}
	} while (next_permutation(a+1, a + n));
	return 0;
}
int prime(int num)
{
	int i, cnt=0;
	int s[] = { 2,3,5,7,11,13,17,19,21,23 };
	for (i = 0; i < 10; i++)
	{
		if (num == s[i])
		{
			return 1;
		}
	}
	return 0;
}