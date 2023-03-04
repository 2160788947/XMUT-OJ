#include<iostream>
#include<string>
using namespace std;
int main()
{
	int l,i, sum1=0, sum2 = 0, sum = 0;
	char m[10] = { 0 };
	scanf("%s", m);
	l = strlen(m);
	if (l == 1)
	{
		sum = 2 *( m[0] - '0');
	}
	else
	{
		for (i = 0; m[i]; i++)
		{
			sum1 = sum1 * 10 + m[i] - '0';
		}
		if (l % 2 == 1)
		{
			swap(m[l / 2 - 1], m[l / 2 + 1]);
		}
		else
		{
			swap(m[l / 2 - 1], m[l / 2]);
		}
		for (i = 0; m[i]; i++)
		{
			sum2 = sum2 * 10 + m[i] - '0';
		}
		sum = sum1 + sum2;
	}
	printf("%d", sum);
	return 0;
}