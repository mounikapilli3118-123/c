#include<stdio.h>
int main()
{
	int speed ,distance, time;
	printf("Enter speed:");
	scanf("%d",&speed);
	printf("Enter distance:");
	scanf("%d",&distance);
	printf("Enter time:");
	scanf("%d",&time);
	distance=(speed*time)/60;
	printf("\n Distance travelled is %d km",distance);
	return 0;
}
