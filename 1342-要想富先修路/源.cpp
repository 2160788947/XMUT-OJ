#include<iostream>
#include<algorithm>
using namespace std;
struct S
{
	int u;
	int v;
	int t;
	S()
	{
		u = v = t = 0;
	}
};
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
int Union(int* num, int* height, int x, int y,int* cnt)
{
	if (x == y)
		return x;
	(*cnt)--;
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
bool cmp(S x, S y)
{
	return x.t < y.t;
}
int main()
{
	int N, M;
	cin >> N >> M;
	int* num = new int[N];
	int* height = new int[N];
	S* s = new S[M];
	int i,cnt=N;
	init(num, height, N);
	for (i = 0; i < M; i++)
	{
		cin >> s[i].u >> s[i].v >> s[i].t;
	}
	sort(s, s + M,cmp);
	for (i = 0; i < M; i++)
	{
		Union(num, height, findRoot(num,s[i].u), findRoot(num,s[i].v),&cnt);
		if (cnt == 1)
		{
			cout << s[i].t;
			return 0;
		}
	}
	cout << -1;
	return 0;
}