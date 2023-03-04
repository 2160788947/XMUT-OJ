#include<stdio.h>
int main()
{
	char letter;
	scanf("%c", &letter);
	if (letter >= 'A' && letter <= 'Z')
	{
		printf("YES");
	}
	else
	{
		printf("NO");
	}
	return 0;
}