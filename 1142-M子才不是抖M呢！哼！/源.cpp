#include<iostream>
#include<vector>
using namespace std;
vector<int>stone;
int N;
int GarsiaWachs()
{
	int i,t= stone.size()-2,temp;
	for (i = 0; i < stone.size() - 2; i++)
	{
		if (stone[i] <= stone[i + 2])
		{
			t = i;
			break;
		}
	}
	temp=stone[t] + stone[t + 1];
	stone.erase(stone.begin() + t);
	stone.erase(stone.begin() + t);
	for (i=t-1; i >= 0; i--)
	{
		if (stone[i] > temp)
		{
			break;
		}
	}
	stone.insert(stone.begin()+(1+i), temp);
	return temp;
}
int main()
{
	while (true)
	{
		stone.clear();
		cin >> N;
		if (N == 0)
			break;
		int t, i, ans=0;
		for(i=0;i<N;i++)
		{
			cin >> t;
			stone.push_back(t);
		}
		for (i = 0; i < N-1; i++)
			ans += GarsiaWachs();
		cout << ans+1 << endl;
	}
	return 0;
}
