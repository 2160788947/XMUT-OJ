#include<iostream>
using namespace std;
int arr[100000] = {0};
int temp[100000] = { 0 };
long long ans = 0;
void Merge(int l, int mid, int r)
{
	int i = l;
	int j = mid + 1;
	int cnt = 0;
	while (i <= mid && j <= r)
	{
		if (arr[i] <= arr[j])
		{
			temp[cnt++] = arr[i];
			i++;
		}
		else
		{
			temp[cnt++] = arr[j];
			j++;
			ans += mid - i + 1;
		}
	}
	while (i <= mid)
	{
		temp[cnt++] = arr[i++];
	}
	while (j <= r)
	{
		temp[cnt++] = arr[j++];
	}
	for (i = 0; i < cnt; i++)
	{
		arr[l + i] = temp[i];
	}
}
void MergeSort(int l, int r)
{
	if (l < r)
	{
		int mid = (l + r) / 2;
		MergeSort(l, mid);
		MergeSort(mid + 1, r);
		Merge(l, mid, r);
	}
}
void read(int& x) {
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
	int T;
	cin >> T;
	while (T--)
	{
		int n;
		ans = 0;
		cin >> n;
		for (int i = 0; i < n; i++)
		{
			read(arr[i]);
		}
		MergeSort(0, n-1);
		cout << ans <<endl;
	}
	return 0;
}