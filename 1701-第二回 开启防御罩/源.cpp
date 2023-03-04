#include<iostream>
using namespace std;
int main()
{
	int N;
	int i,j,t,l;
	cin >> N;
	t = N / 2;
	l = t / 2;
	for (i = N; i >=-N; i--)
	{
		for (j = -N; j <= N; j++)
		{
			if (abs(i) + abs(j) == N)
			{
				cout << '*';
			}
			else if (abs(i) == N|| abs(j)==N)
			{
				cout << "*";
			}
			else if (abs(i) + abs(j) == t)
			{
				cout << "*";
			}
			else if ((abs(i) == t|| abs(j) == t)&& abs(i) + abs(j) <=N)
			{
				cout << "*";
			}
			else
			{
				cout << " ";
			}
		}
		cout << endl;
	}
	return 0;
}