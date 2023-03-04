#include<iostream>
#include<cstring>
#include<algorithm>
using namespace std;
int Next[100005] = { 0 };

void GetNext(string p) {
	Next[0] = -1;
	int k = -1;
	int j = 0;
	while (j < p.length()) {
		if (k == -1 || p[k] == p[j]) {
			k++;
			j++;
			Next[j] = k;
		}
		else {
			k = Next[k];
		}
	}
}

bool kmp(string a,string b)
{
	GetNext(b);
	int i,j;
	i = j = 0;
	while (i < a.length())
	{
		if (j == -1 ||a[i] == b[j])
		{
			i++;
			j++;
			if (j == b.length())
				return true;
		}
		else
		{
			j = Next[j];
		}
	}
	return false;
}

int main()
{
	int T;
	cin >> T;
	while (T--)
	{
		string a, b,c;
		cin >> a >> b;
		c = b;
		reverse(c.begin(), c.end());
		if (b == "0" ||(a.length() >= b.length()&&(kmp(a, b)||kmp(a,c))))
		{
			cout << "Alice" << endl;
		}
		else
		{
			cout << "Bob" << endl;
		}
	}
	return 0;
}
