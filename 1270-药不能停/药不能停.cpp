#include<iostream>
#include<queue>
using namespace std;
int main()
{
	priority_queue<int,vector<int>,greater<int> >q;
	int N,i;
	int sum = 0;
	cin >> N;
	int* a = new int[N];
	for (i = 0; i < N; i++)
	{
		cin >> a[i];
		q.push(a[i]);
	}
	while (q.size()!=1)
	{
		int a = q.top();
		q.pop();
		int b = q.top();
		q.pop();
		sum += a + b;
		q.push(a + b);
	}
	cout << sum;
	return 0;
}