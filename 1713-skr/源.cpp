#include<iostream>
#include <string>
#include <sstream>
using namespace std;
int main()
{
	int i, n,cnt=0;
	string str;

	getline(cin, str);
	while((n=str.find("skr"))!=-1)
	{
		string s;
		cnt++;
		stringstream ss;
		ss << cnt;
		ss >> s;
		s = "V" + s;
		str=str.replace(n, 3, s);
	}
	i = str.length();
	while (i--)
	{
		cout << str[i];
	}
	return 0;
}