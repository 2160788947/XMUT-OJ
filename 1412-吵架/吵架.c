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
/*n^n����λ
n^ n��λ����k = [lg(n ^ n)] + 1 = [n * lg(n)]
����ߵ�������λ��x = n ^ n / 10 ^ (k - 1)
ȡ������lg(x) = n * lg(n) - (k - 1) = (n * lg(n) - [n * lg(n)])
����ߵ�����[x] = [10 ^ lg(x)] = [10 ^ (n * lg(n) - [n * lg(n)])]

//n!����λ
n!��λ����k = [lg(n!)] + 1
����ߵ�������λ��x = n!/ 10 ^ (k - 1)
ȡ������lg(x) = lg(n!) - (k - 1) = lg(n!) - [lg(n!)]
����ߵ�����[x] = [10 ^ lg(x)] = [10 ^ (lg(n!) - [lg(n!)])]
*/