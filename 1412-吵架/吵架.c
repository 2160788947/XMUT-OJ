#include<stdio.h>
#include<math.h>
int main()
{
	int T, n,t,num;
	double i;
	scanf("%d", &T);
	while (T--)
	{
		scanf("%d", &n);
		i = n * log10(n);
		t = i;
		i -= t;
		num = pow(10, i);
		printf("%d\n", num);
	}
	return 0;
}
/*n^n最左位
n^ n的位数：k = [lg(n ^ n)] + 1 = [n * lg(n)]
最左边的数作个位：x = n ^ n / 10 ^ (k - 1)
取对数：lg(x) = n * lg(n) - (k - 1) = (n * lg(n) - [n * lg(n)])
最左边的数：[x] = [10 ^ lg(x)] = [10 ^ (n * lg(n) - [n * lg(n)])]

//n!最左位
n!的位数：k = [lg(n!)] + 1
最左边的数作个位：x = n!/ 10 ^ (k - 1)
取对数：lg(x) = lg(n!) - (k - 1) = lg(n!) - [lg(n!)]
最左边的数：[x] = [10 ^ lg(x)] = [10 ^ (lg(n!) - [lg(n!)])]
*/