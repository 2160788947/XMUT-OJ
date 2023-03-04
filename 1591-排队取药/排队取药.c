#include<stdio.h>
int main()
{
	int m, n, num, cnt = 0;;
	scanf("%d %d", &m,&n);
	while (n--)
	{
		scanf("%d", &num);
		if ((m - num) >= 0)
			m -= num;
		else
			cnt++;
	}
	printf("%d", cnt);
	return 0;
}