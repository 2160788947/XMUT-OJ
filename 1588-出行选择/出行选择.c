#include<stdio.h>
int main()
{
	int meter;
	double time_bike, time_walk;
	scanf("%d", &meter);
	time_bike = (meter / 3.0) + 50;
	time_walk = meter / 1.2;
	if (time_bike > time_walk)
	{
		printf("Walk");
	}
	else
	{
		printf("Bike");
	}
	return 0;
}