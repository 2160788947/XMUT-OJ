#include<iostream>;
using namespace std;
void init(int* num, int* height, int n)
{
	int i;
	for (i = 0; i <= n; i++)
	{
		num[i] = i;
		height[i] = 1;
	}
}
int findRoot(int* num, int x)
{
	while (num[x] != x)
	{
		x = num[x];
	}
	return x;
}
int unit(int* num, int* height, int x, int y)
{
	if (x == -1)
	{
		return y;
	}
	if (y == -1)
	{
		return x;
	}
	if (height[x] > height[y])
	{
		num[y] = x;
		return x;
	}
	else if (height[x] < height[y])
	{
		num[x] = y;
		return y;
	}
	else
	{
		num[y] = x;
		height[x]++;
		return x;
	}
}
bool judgeSame(int* num, int x, int y)
{
	return findRoot(num, x) == findRoot(num, y);
}

int main()
{
	int N, M, i, cnt = 0;
	cin >> N >> M;
	int* num = new int[N + 1];
	int* height = new int[N + 1];
	init(num, height, N);
	while (M--)
	{
		int K, n;
		cin >> K;
		int Root = -1;
		while (K--)
		{
			cin >> n;
			Root = unit(num, height, Root, findRoot(num, n));
		}
	}
	for (i = 0; i <= N; i++)
	{
		if (findRoot(num, 0) == findRoot(num, num[i]))
			cnt++;
	}
	cnt -= 1;
	cout << cnt;
	return 0;
}