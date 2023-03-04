#include<stdio.h>
void sort(int num[], int n)
{
	int t;
	for (int i = 0; i < n - 1; i++)
	{
		for (int j = 0; j < n - i - 1; j++)
		{
			if (num[j] > num[j + 1])
			{
				t = num[j];
				num[j] = num[j + 1];
				num[j + 1] = t;
			}
		}
	}
}
//从小到大排序
int main()
{
	int n, s, num[105] = { 0 }, i, t[105] = {0};
	double sum=0;
	scanf("%d %d", &n, &s);
	for (i = 0; i < n; i++)
	{
		scanf("%d", &num[i]);
	}
	sort(num, n);
	for (i = 0; i < n; i++)
	{
		t[i % s] += num[i];
		sum += t[i % s];
	}
	printf("%.2lf", sum / 10.0);
	return 0;
}