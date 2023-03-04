#include<iostream>
using namespace std;
int main()
{
	int N,i;
	cin >> N;
	while (N--)
	{
		string str;
		bool flag = true;
		int num=0,cnt=0;
		cin >> str;
		for (i = 0; i < str.length(); i++)
		{
			if (str[i] != '.')
			{
				num = num * 10 + str[i]-'0';
			}
			else
			{
				cnt++;
				if (num > 255 || num < 0)
				{
					flag = false;
					break;
				}
				num = 0;
			}
		}
		if (cnt != 3)
			flag = false;
		if (flag)
			cout << "YES" << endl;
		else
			cout << "NO" << endl;
	}
	return 0;
}
