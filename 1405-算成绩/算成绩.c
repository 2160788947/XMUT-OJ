#include<stdio.h>
#include<string.h>

int main()
{
	int i,score=0,cnt=0,blank=0,l;
	char answer_y[51] = { 0 }, answer_n[51]={0},n;
	scanf("%s", answer_y);
	getchar();
	gets(answer_n);
	for (i = 0;answer_y[i] != '\0';i++)
	{
		if (answer_y[i] == answer_n[i])
		{
			score ++;
		}
		else if (answer_y[i] != answer_n[i])
		{
			if (answer_n[i] != ' ')
			{
				score--;
			}
			else
			{
				blank++;
			}
		}
	}
	for (l = 0;answer_n[l] != '\0';l++)
	{
		if (answer_n[l] != ' ')
		{
			n = answer_n[l];
			break;
		}
	}	
	for (l = 0;answer_n[l] != '\0';l++)
	{
		if (n == answer_n[l])
			cnt++;
	}

	if (score < 0|| cnt == (strlen(answer_y) - blank))
	{
		score = 0;
	}
	printf("%d", score*2);
	return 0;
}