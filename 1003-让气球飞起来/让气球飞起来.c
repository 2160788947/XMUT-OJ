#include<stdio.h>
#include<string.h>
int main()
{
	char color[15][100];
	int n, i, cnt[100] = {0}, j, k;
	scanf("%d", &n);//�������
	for (i = 0;i < n;i++)
	{
		scanf("%s", &color[i]);//����������ɫ
	}
	for (i = 0;i < n-1;i++)
	{
		for (j = i + 1;j < n;j++)
		{
			if (strcmp(color[i], color[j]) == 0)
			{
				cnt[i]++;//�ж���ͬ��ɫ������,������
			}
		}
	}
	for (i = 0,j=0;i < n;i++)
	{
		if (cnt[i] > j)
		{
			k = i;//�ҵ�������������
		}
	}
	printf("%s", &color[k]);
	return 0;
}