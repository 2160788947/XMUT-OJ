#include<stdio.h>
int min(int a, int b) {
	return a < b ? a : b;
}
int main() {
	int n, i;
	int ugly[1501] = {1};
	int* p2 = ugly, * p3 = ugly, * p5 = ugly;
	for (i = 1;i < 1501;++i) {
		ugly[i] = min(min(*p2 * 2, *p3 * 3), *p5 * 5);
		while (*p2 * 2 <= ugly[i]) {
			++p2;
		}
		while (*p3 * 3 <= ugly[i]) {
			++p3;
		}
		while (*p5 * 5 <= ugly[i]) {
			++p5;
		}
	}
	while (scanf("%d", &n)&& n) {
		printf("%d\n", ugly[n - 1]);
	}
}