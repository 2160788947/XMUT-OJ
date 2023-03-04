#include<iostream>
#include<cmath>
using namespace std;
double num[4] = { 0 };
bool dfs(int depth)
{
	if (depth == 1)
	{	
		if (fabs(num[0] - 24) < 1e-6)
			return true;
		else
			return false;
	}
	for (int i = 0; i < depth; i++)
	{
		for (int j = i+1; j < depth; j++)
		{
			double a = num[i];
			double b = num[j];
			swap(num[j], num[depth - 1]);
			if ((num[i] = a + b,dfs(depth - 1))
				|| (num[i] = a * b, dfs(depth - 1))
				|| (num[i] = a - b, dfs(depth - 1))
				|| (num[i] = b - a, dfs(depth - 1))
				|| (num[i] = b / a, dfs(depth - 1))
				|| (num[i] = a / b, dfs(depth - 1)))
				return true;
			num[i] = a;
			swap(num[j], num[depth - 1]);
		}
	}
	return false;
}
int main()
{
	int T;
	cin >> T;
	while (T--)
	{
		for (int i = 0; i < 4; i++)
			cin >> num[i];
		if (dfs(4))
			cout << "Yes" << endl;
		else
			cout << "No" << endl;
	}
}