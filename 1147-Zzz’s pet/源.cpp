#include<iostream>
#include<numeric>
#define ll long long
using namespace std;
int W[100005] = { 0 };
int K[100005] = { 0 };
void read(int& x) {
	x = 0;
	char c = getchar();
	while (c < '0' || c>'9')c = getchar();
	while (c >= '0' && c <= '9') {
		x = x * 10 + c - '0';
		c = getchar();
	}
}
void write(ll x) {
	ll y = 10, len = 1;
	while (y <= x) { y *= 10; len++; }
	while (len--) { y /= 10; putchar(x / y + 48); x %= y; }
}
int main()
{
	int T;
	cin >> T;
	while (T--)
	{
		int n, m, q,w,k;
		int l, r;
		read(n);
		read(m);
		read(q);
		while (n--)
		{
			read(k);
			read(w);
			W[w] += 1;
			K[k] += 1;
		}
		while (q--)
		{
			ll w_sum, k_sum;
			read(l);
			read(r);
			w_sum = accumulate(W+l, W+r, 0);
			k_sum = accumulate(K+l, K+r, 0);
			write(k_sum);
			putchar(' ');
			write(w_sum);
			putchar('\n');
		}
	}
	return 0;
}