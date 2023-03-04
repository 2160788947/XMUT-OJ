#include<iostream>
#include<vector>
#include<queue>
using namespace std;
bool cmp(int a, int b)
{
	return a > b;
}
int main()
{
	int N;
	int n;
	priority_queue<int, vector<int>, greater<int> >p;
	scanf("%d,%d", &N);
	while (N--)
	{
		cin >> n;
		p.push(n);
	}
	p.pop();
	cout << p.top();
	return 0;
}