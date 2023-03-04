#include<iostream>
#include<vector>
using namespace std;
int main()
{
	int N,i,j;
	cin >> N;
	int* num = new int[N];
	int cnt;
	vector<int>v1, v2;
	for (i = 0; i < N; i++)
	{
		cin >> num[i];
	}
	v1.push_back(num[0]);
	v2.push_back(num[0]);
	for (i = 1; i < N; i++)
	{
		if (num[i] >= v1.back())
			v1.push_back(num[i]);
		else
		{
			for (j = 0; j < v1.size(); j++)
			{
				if (v1[j] > num[i])
				{
					v1[j] = num[i];
					break;
				}
			}
		}
		if (num[i] <= v2.back())
			v2.push_back(num[i]);
		else
		{
			for (j = 0; j < v2.size(); j++)
			{
				if (v2[j] < num[i])
				{
					v2[j] = num[i];
					break;
				}
			}
		}
	}
	cout << (v1.size() > v2.size() ? N - v1.size() : N - v2.size());
	return 0;
}