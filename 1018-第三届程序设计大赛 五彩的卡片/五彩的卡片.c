#include<stdio.h>
int main()
{
	int n,i,cnt=0;
	char c[4] = { 'R','G','B','Y' }, input[100001];
	scanf("%d ", &n);
	for (i = 0;i < n && (input[i] = getchar()) != '\n';i++);
	for (i = 1;i <= n;i++)
	{
		if (input[i] == input[i - 1])//����Ƿ�����ͬ����ɫ
		{
			cnt++;
			if (input[i] == input[i + 1])//�����������ͬ����ɫ��һ��,������һ����ɫ
				i++;
		}
	}
	printf("%d", cnt);
	return 0;
}