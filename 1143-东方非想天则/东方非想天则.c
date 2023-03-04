#include<stdio.h>
int main()
{
	int n,cnt,i;
	while (1)
	{
		char c[250] = { 0 };
		int mood = 80;
		cnt = 0;
		scanf("%d", &n);
		getchar();
		if (n == 0)
			break;
		for (i = 0;i < 2*n;i++)
			scanf("%c", &c[i]);
		for (i = 0;i < 2*n;i+=2)
		{
			if (c[i] == 'C')
				mood -= 20;
			else if (c[i] == 'S')
				mood += 5;
			else if (c[i] == 'Z')
				mood += 1;
			if (mood > 100)
				mood = 100;
			cnt++;
			if (mood <= 0)
				break;
		}
		printf("%d\n", cnt);
	}
	return 0;
}