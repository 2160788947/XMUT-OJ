#include<iostream>
#include<algorithm>
#include<string>
using namespace std;
int check(char item[]);
//检测是否全部转为b
int main()
{
	int N, L = 1, i, j, cnt[1000] = { 0 },count,l=0;
	char item[1100] = { 0 }, copy[1100] = { 0 };
	memset(cnt, 1, sizeof(cnt));
	scanf("%d", &N); 
	for (i = 0; i < N; i++)
	{
		scanf(" %c", &item[i]);
	}
	for (; L <= N; L++)
	{
		strcpy(copy, item);
		count = 0;
		for (i = 0; i+L <= N; i++)
		{
			if (copy[i] == 'a')
			{
				count++;
				for (j = i; j < L+i; j++)
				{
					if (copy[j] == 'a')
						copy[j] = 'b';
					else if (copy[j] == 'b')
						copy[j] = 'a';
				}
			}
		}
		if(check(copy))
		cnt[l++] = count;
	}
	printf("%d", *min_element(cnt, cnt + 1000));
	return 0;
}

int check(char item[])
{
	int i;
	for (i = 0; item[i]; i++)
	{
		if (item[i] == 'a')
		{
			return 0;
		}
	}
	return 1;
}