#include<iostream>
using namespace std;

int gcd(int x, int y) {
	if (y == x)
		return x;
	else
		return 1;
}

void read(int& x) {
	x = 0; 
	char c = getchar();
	while (c < '0' || c>'9')c = getchar();
	while (c >= '0' && c <= '9') {
		x = x * 10 + c - '0';
		c = getchar();
	}
}

void write(int x) {
	int y = 10, len = 1;
	while (y <= x) { y *= 10; len++; }
	while (len--) { y /= 10; putchar(x / y + 48); x %= y; }
	putchar('\n');
}

int main()
{
	int T;
	read(T);
	while (T--)
	{
		int x, y;
		read(x);
		read(y);
		write(gcd(x, y));
	}
	return 0;
}
