#include<stdio.h>
#include<string.h>
int main()
{
	int n;
	char english[4][1000];
	for (n = 0;n < 4;n++)
	{
		gets(english[n]);
	}
	if(strlen(english[0])> strlen(english[1])&& strlen(english[0]) > strlen(english[2])&& strlen(english[0]) > strlen(english[3]))
		printf("A");
	else if (strlen(english[1]) > strlen(english[0]) && strlen(english[1]) > strlen(english[2]) && strlen(english[1]) > strlen(english[3]))
		printf("B");
	else if (strlen(english[2]) > strlen(english[0]) && strlen(english[2]) > strlen(english[1]) && strlen(english[2]) > strlen(english[3]))
		printf("C");
	else if (strlen(english[3]) > strlen(english[0]) && strlen(english[3]) > strlen(english[1]) && strlen(english[3]) > strlen(english[2]))
		printf("D");
	return 0;
}
