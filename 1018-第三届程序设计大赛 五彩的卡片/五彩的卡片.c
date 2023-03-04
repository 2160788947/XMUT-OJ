#include<stdio.h>
int main()
{
	int n,i,cnt=0;
	char c[4] = { 'R','G','B','Y' }, input[100001];
	scanf("%d ", &n);
	for (i = 0;i < n && (input[i] = getchar()) != '\n';i++);
	for (i = 1;i <= n;i++)
	{
		if (input[i] == input[i - 1])//检测是否有相同的颜色
		{
			cnt++;
			if (input[i] == input[i + 1])//如果有三个相同的颜色在一起,向下跳一个颜色
				i++;
		}
	}
	printf("%d", cnt);
	return 0;
}