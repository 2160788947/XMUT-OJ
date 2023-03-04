#include<stdio.h>
#include<string.h>
int main()
{
	int i;
	char name[41];
	scanf("%s", name);
	for (i = strlen(name);name[i] != '.';i--);
	name[i] = '\0';
	printf("%s", name);
	return 0;
}