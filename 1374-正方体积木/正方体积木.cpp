#include<iostream>
#include<string>
using namespace std;
int num[110][110] = { 0 };
int main()
{
	int T,i,j,N,M,s;
	scanf("%d",&T);
	while(T--)
	{
		memset(num, 0, sizeof(num));
		s = 0;
		scanf("%d %d", &N,&M);
		for (i = 1; i <= N; i++)
		{
			for (j = 1; j <= M; j++)
			{
				scanf("%d", &num[i][j]);
				if (num[i][j] != 0)
				{
					s++;
				}
			}
		}
		for (i = 1; i <= N; i++)
		{
			for (j = 1; j <= M; j++)
			{
				s += max(num[i][j] - num[i][j - 1], 0);
				//���㵱ǰλ����ߵ�����
				s += max(num[i][j] - num[i][j + 1], 0);
				//���㵱ǰλ���ұߵ�����
				s += max(num[i][j] - num[i-1][j], 0);
				//���㵱ǰλ���ϱߵ�����
				s += max(num[i][j] - num[i+1][j], 0);
				//���㵱ǰλ���±ߵ�����
			}
		}
		printf("%d\n", s);
	}
	return 0;
}