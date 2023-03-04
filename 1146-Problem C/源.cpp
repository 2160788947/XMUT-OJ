//#include<iostream>
//#include<algorithm>
//using namespace std;
//#define ll long long
//ll num[3050][3050] = { 0 };
//void read(ll& x) {
//	x = 0;
//	char c = getchar();
//	while (c < '0' || c>'9')c = getchar();
//	while (c >= '0' && c <= '9') {
//		x = x * 10 + c - '0';
//		c = getchar();
//	}
//}
//
//int main()
//{
//	ll T;
//	ll R;
//	read(T);
//	while (T--)
//	{
//		read(R);
//		for (int i = 0; i < R; i++)
//		{
//			for (int j = 0; j < i + 1; j++)
//			{
//				read(num[i][j]);
//				if (i != 0)
//				{
//					if (j != 0)
//						num[i][j] = max(num[i][j] + num[i - 1][j - 1], num[i][j] + num[i - 1][j]);
//					else
//						num[i][j] = num[i][j] + num[i - 1][j];
//				}
//			}
//		}
//		cout << *max_element(num[R - 1], num[R - 1] + R) << endl;
//	}
//
//	return 0;
//}
#include<iostream>
#include<algorithm>
using namespace std;
#define ll long long

void read(ll& x) {
	x = 0;
	char c = getchar();
	while (c < '0' || c>'9')c = getchar();
	while (c >= '0' && c <= '9') {
		x = x * 10 + c - '0';
		c = getchar();
	}
}

int main()
{
	ll T;
	ll R;
	read(T);
	while (T--)
	{
		int cnt = 0;
		read(R);
		ll num[2][3050] = { 0 };
		for (int i = 0; i < R; i++)
		{
			for (int j = 0; j < i + 1; j++)
			{
				ll t;
				read(num[cnt][j]);
				if (i != 0)
				{
					if (j != 0)
						num[cnt][j] += max(num[cnt ^ 1][j-1], num[cnt ^ 1][j]);
					else
						num[cnt][j] += num[cnt ^ 1][j];
				}
			}
			cnt ^= 1;
		}
		cnt ^= 1;
		cout << *max_element(num[cnt], num[cnt]+ R) << endl;
	}

	return 0;
}