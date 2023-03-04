#include<iostream>
#include<queue>
#include<string>
using namespace std;
int n;
string k;
string t;
bool flag[100000] = { 0 };
int check(string s) {
	int t = 0;
	for (int i = 0; i < s.size(); i++)
		t = (s[i] - '0' + t * 10) % n;
	return t;
}

void bfs(string s)
{
	queue<string>q;
	q.push(s);
	while (q.size())
	{
		string t = q.front();
		q.pop();
		int a = check(t);
		if (a == 0)
		{
			cout << t << endl;
			return;
		}
		if (!flag[a])
		{
			flag[a] = true;
			q.push(t + '0');
			q.push(t + k);
		}
	}
}

int main()
{
	int T;
	cin >> T;
	while (T--)
	{
		cin >> n >> k;
		memset(flag, false, n * sizeof(bool));
		bfs(k);
	}
	return 0;
}