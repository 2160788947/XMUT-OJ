#include<iostream>
using namespace std;
int main()
{
	int N;
	int H, M;
	int h, m;
	cin >> N;
	h = 0, m = 0;
	while (N--)
	{
		cin >> H >> M;
		h += H;
		m += M;
	}
	cout << 1440-((h) * 60 + m);
	return 0;
}
