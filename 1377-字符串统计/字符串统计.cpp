#include <iostream> 
#include <map>
#include<string>
using namespace std;
map<string, int>f;
int main()
{
	ios::sync_with_stdio(0);
	cin.tie(0);
	int n,max=0;
	string str, ch;
	scanf("%d", &n);
	while (n--)
	{
		cin >> str;
		f[str]++;
		if (max < f[str])
		{
			max = f[str];
			ch = str;
		}
	}
	cout << ch;
	return 0;
}

//²Î¿¼:https://blog.csdn.net/weixin_44772995/article/details/92839903
//https://blog.csdn.net/weixin_43686836/article/details/102756918