#include<iostream>
#include<map>
using namespace std;
int main()
{
	map<char, int>m;
	int i,n;
	char str[3000] = { 0 };
	cin.getline(str,5000);
	for (i = 0; str[i]; i++)
	{
		m[str[i]]++;
	}
	while (i--)
	{
		if (str[i] == ' ')
			cout << str[i];
		else
		{
			n = m[str[i]]--;
			while (n)
			{
				cout << n % 10;
				n /= 10;
			}
			cout << str[i];
		}
	}
	return 0;
}