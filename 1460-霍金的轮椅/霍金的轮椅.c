#include<stdio.h>
int main()
{
	int x, y,d,i;
	char ch,str[100];
	scanf("%d %d %c", &x, &y, &ch);
	getchar();
	if (ch == 'N')
		d = 1;
	else if (ch == 'E')
		d = 2;
	else if (ch == 'W')
		d = 3;
	else if (ch == 'S')
		d = 4;
	scanf("%s", str);
	for (i = 0;str[i] != '\0';i++)
	{
		if (str[i] == 'G')
		{
			if (d == 1)
				y++;
			else if (d == 2)
				x++;
			else if (d == 3) 
				x--;
			else if (d == 4) 
				y--;
		}
		else if (str[i] == 'R')
		{
			if (d == 1)
				d = 2;
			else if (d == 2)
				d = 4;
			else if (d == 3)
				d = 1;
			else if (d == 4)
				d = 3;
		}
		else if (str[i] == 'L')
		{
			if (d == 1)
				d = 3;
			else if (d == 2)
				d = 1;
			else if (d == 3)
				d = 4;
			else if (d == 4)
				d = 2;
		}
	}
	printf("%d %d ", x, y);
	if (d == 1) printf("N");
	else if (d == 2) printf("E");
	else if (d == 3) printf("W");
	else if (d == 4) printf("S");
	return 0;
}