#include<iostream>
using namespace std;

int main()
{
	int n,i;
	char c;
	int year, month;
	int max, min;
	cin >> n;
	cin >> year >> c >> month;
	min = max = year * 60 + month;
	for (i = 0; i < n-1; i++)
	{
		cin >> year >> c >> month;
		if (min > year * 60 + month)
			min = year * 60 + month;
		if (max < year * 60 + month)
			max = year * 60 + month;
	}
	cout << max - min;
	return 0;
}