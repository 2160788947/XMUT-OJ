#include<iostream>
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
int Union(int* num, int* height, int x, int y)
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
	int N, M, K;
	int i,l=0;
	cin >> N >> M >> K;
	int* num = new int[N + 1];
	int* height = new int[N + 1];
	int* ruin = new int[M+1];
	int* S = new int[M+1];
	int* E = new int[M+1];
	int** option = new int*[K+1];
	bool* result = new bool[K+1];
	init(num, height, N);
	memset(ruin, 0, (M+1) * sizeof(int));
	for (i = 1; i <= M; i++)
	{
		scanf("%d %d", &S[i], &E[i]);
	}
	for (i = 1; i <= K; i++)
	{
		char c[2];
		scanf("%s", c);
		option[i] = new int[3];
		if (c[0] == 'P')
		{
			scanf("%d", &option[i][1]);
			option[i][0] = 0;	
			ruin[option[i][1]] = i;
		}
		else
		{
			scanf("%d %d", &option[i][1],&option[i][2]);
			option[i][0] = 1;
		}
	}
	for (i = 1; i <= M; i++)
	{
		if (ruin[i])
		{
			//option[ruin[i]][1] = S[i];
			//option[ruin[i]][2] = E[i];
		}
		else
		{
			Union(num, height, findRoot(num, S[i]), findRoot(num, E[i]));
		}

	}
	for (i = K; i >0; i--)
	{
		if (option[i][0] == 1)
		{
			result[l++] = judgeSame(num, option[i][1], option[i][2]);
		}
		else
		{
			Union(num, height, findRoot(num, S[option[i][1]]), findRoot(num, E[option[i][1]]));
		}
	}
	while (l--)
	{
		if (result[l])
			cout << "Yes"<<endl;
		else
			cout << "No"<<endl;;
	}
	return 0;
}