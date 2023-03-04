#include<iostream>
using namespace std;
string S;
void fun(int n)
{
	switch (n)
	{
	case 1:
		if (S=="0")
		{
			break;
		}
		S += '0';
		break;
	case 2:
		if (S.length() == 1)
		{
			S = "0";
			break;
		}
		S = S.substr(0, S.length()-1);
		break;
	case 3:
		cout << S << endl;
		break;
	default:
		break;
	}
}
int main()
{
	int T;
	cin >> T;
	while (T--)
	{
		int n, m;
		cin >> n >> m;
		cin >> S;
		while (m--)
		{
			int a;
			cin >> a;
			fun(a);
		}
	}
}