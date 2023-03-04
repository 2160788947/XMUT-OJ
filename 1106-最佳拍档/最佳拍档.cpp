#include <iostream>
#include <algorithm>
using namespace std;
int main()
{
	int i, j, N, Q[10][10] = { 0 }, P[10][10] = { 0 }, U[10][10] = { 0 }, T[10][10] = {0};
	int sum = 0, sign1 = 0, sign2 = 0, C[] = {0,1,2,3,4,5,6,7,8,9};
	scanf("%d", &N);
	for (i = 0; i < N; i++)
	{
		for (j = 0; j < N; j++)
		{
			scanf("%d", &P[i][j]);
		}
	}
	for (i = 0; i < N; i++)
	{
		for (j = 0; j < N; j++)
		{
			scanf("%d", &Q[i][j]);
		}
	}
	for (i = 0; i < N; i++)
	{
		for (j = 0; j < N; j++)
		{
			U[i][j] = P[i][j] * Q[j][i];
		}
	}
	do
	{
		int u = 0;
		for ( i = 0; i < N; i++)
			u += U[i][C[i]];
		if (u > sum) 
			sum = u;
	} while (next_permutation(C, C + N));
	printf("%d", sum);
	return 0;
}

