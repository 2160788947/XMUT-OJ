#include<iostream>
using namespace std;
char map[3][3];
char c;
bool flag = false;
bool check()
{
	int i;
	for (i = 0; i < 3; i++)
	{
		if (map[0][i] == map[1][i] && map[1][i] == map[2][i]&&map[0][i] == c)
			return true;
		if (map[i][0] == map[i][1] && map[i][1] == map[i][2]&&map[i][0] == c)
			return true;
	}
	if (map[0][0] == map[1][1] && map[1][1] == map[2][2] && map[1][1] == c)
		return true;
	if (map[0][2] == map[1][1] && map[1][1] == map[2][0] && map[1][1] == c)
		return true;
	return false;
}

void print()
{

	int i, j;
	for (i = 0; i < 3; i++)
	{
		for (j = 0; j < 3; j++)
		{
			cout << map[i][j] << " ";
		}
		cout << endl;
	}
}
void dfs()
{
	int i, j,cnt=0;
	for (i = 0; i < 3; i++)
	{
		for (j = 0; j < 3; j++)
		{
			int count = 0;
			if (map[i][j] == '.')
			{
				map[i][j] = c;
				if (check())
					cnt++;
				map[i][j] = '.';
			}
		}
	}
	if (cnt >= 2)
		flag = true;
}
int main()
{
	int T;
	int i, j;
	cin >> T;
	while (T--)
	{
		flag = false;
		for (i = 0; i < 3; i++)
		{
			for (j = 0; j < 3; j++)
			{
				cin >> map[i][j];
			}
		}
		cin >> c;
		for (i = 0; i < 3; i++)
		{
			for (j = 0; j < 3; j++)
			{
				if (map[i][j] == '.')
				{
					map[i][j] = c;
					if (check())
					{
						flag = true;
					}
					dfs();
					map[i][j] = '.';
				}
			}
		}
		if (flag)
			cout << "Kim win!" << endl;
		else
			cout << "Cannot win!" << endl;
	}
	return 0;
}
