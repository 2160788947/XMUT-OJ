#include<stdio.h>
int main()
{
	char gender[100] = { 0 };
	int n, id[100] = { 0 }, attack[100]={0}, defence[100] = { 0 }, defence_ = 0, i, t = 0, attack_ = 0;
	scanf("%d", &n);
	for (i = 1;i <= n;i++)
	{
		scanf("%d,%d,%d,%c", &id[i], &attack[i], &defence[i], &gender[i]);
	}
	for (i = 1;i <= n;i++)
	{
		if (attack[i] > attack)
			attack_ = attack[i];
	}
	for (i = 1;i <= n;i++)
	{
		if (gender[i] == 'M')
		{
			if (t == 0)
			{
				attack_ = attack[i];
				defence_ = defence[i];
				t = i;
			}
			if (attack_ < attack[i])
			{
				t = i;
				attack_ = attack[i];
				defence_ = defence[i];
			}
			if(attack_ == attack[i])
			if (defence_ <= defence[i])
			{
				t = i;
				defence_ = defence[i];
			}
		}
		
	}
	printf("%d", id[t]);
	return 0;
}