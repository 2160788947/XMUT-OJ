#include<stdio.h>
int main()
{
	int i;
	char ch[3][4],cnt=0;
	scanf("%s", ch[0]);
	getchar();
	scanf("%s", ch[1]);
	getchar();
	scanf("%s", ch[2]);
	for (i = 0;i < 3;i++)
	{
		if (ch[i][0] == 'O' && ch[i][1] == 'O' && ch[i][2] == 'O')
			cnt = 2;
		else if (ch[0][i] == 'O' && ch[1][i] == 'O' && ch[2][i] == 'O')
			cnt = 2;
	}
	if (ch[0][0] == 'O' && ch[1][1] == 'O' && ch[2][2] == 'O')
		cnt = 2;
	else if (ch[2][0] == 'O' && ch[1][1] == 'O' && ch[0][2] == 'O')
		cnt = 2;
	for (i = 0;i < 3;i++)
	{
		if (ch[i][0] == 'X' && ch[i][1] == 'X' && ch[i][2] == 'X')
			cnt = 1;
		else if (ch[0][i] == 'X' && ch[1][i] == 'X' && ch[2][i] == 'X')
			cnt = 1;
	}
	if (ch[0][0] == 'X' && ch[1][1] == 'X' && ch[2][2] == 'X')
		cnt = 1;
	else if (ch[2][0] == 'X' && ch[1][1] == 'X' && ch[0][2] == 'X')
		cnt = 1;
	if (cnt == 2)
		printf("O\n");
	else if (cnt == 1)
		printf("X\n");
	else if (cnt == 0)
		printf("NO\n");
	return 0;

}