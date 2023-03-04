#include <iostream>
#include <algorithm>
#include<vector>
#include<set>
using namespace std;

bool Judge(char ch[],int N)
{
	int i, n = 0,l=0;
	char temp = ch[0];
	for (i = 0;i<N;i++)
	{
		if (ch[i] < temp)
		{
			return false;
		}
		temp = ch[i];
		switch (ch[i])
		{
		case 'a':
		case 'e':
		case 'i':
		case 'o':
		case 'u':
			n++;
			break;
		default:
			l++;
			break;
		}
	}
	if (n < 1 || l < 2)
	{
		return false;
	}
	else
	{
		return true;
	}
}

int main()
{
	int i, L, C, n=0,t=1;
	cin >> L >> C;
	char ch[100] = { 0 }, k[100] = { 0 };
	set<string>p;
	set<string>::iterator it;
	getchar();
	cin.getline(k,100);
	for (i = 0; k[i]; i++)
	{
		if(k[i]!=' ')
		ch[n++] = k[i];
	}
	sort(ch, ch + C);
	do 
	{
		if (Judge(ch,L)&&t>0)
		{
			string s = "";
			for (i = 0; i < L; i++)
			{
				s += ch[i];
			}
			p.insert(s);
		}
	} while (next_permutation(ch, ch + C));

	for (it = p.begin(); it != p.end(); it++)
	{
		cout << *it << endl;
	}
	return 0;
}