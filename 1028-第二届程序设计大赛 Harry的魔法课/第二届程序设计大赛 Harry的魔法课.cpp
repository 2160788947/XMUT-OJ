#include<iostream>
#include<queue>
using namespace std;
int main()
{
	int flag[15] = { 0 };
	string word[15],str;
	int i,n,l;

	n = 0;
	while (true)
	{
		cin >> str;
		if (str == "0")
			break;
		word[n++] = str;
	}
	
	queue<int>q;
	for (i = 0; i < n; i++)
	{
		if (word[i][0] == 'b')
		{
			q.push(i);
			flag[i] = 1;
		}
	}
	
	while (q.size())
	{
		l = q.front();
		
		for (i = 0; i < n; i++)
		{
			if (!flag[i] && word[l][word[l].length() - 1] == word[i][0])
			{
				q.push(i);
				flag[i] = 1;
				if (word[i][word[i].length() - 1] == 'm')
				{
					cout << "Yes";
					return 0;
				}
			}
		}
		q.pop();
	}
	cout << "No";
	return 0;
}