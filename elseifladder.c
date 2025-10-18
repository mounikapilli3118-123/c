#include<stdio.h>
int main()
{
	int week;
	printf("Enter week:");
	scanf("%d",&week);
	if(week==1)
	{
		printf("monday\n");
	}
	else if(week==2)
	{
		printf("tuesday\n");
	}
	else if(week==3)
	{
		printf("wednesday\n");
	}
	else if(week==4)
	{
		printf("thursday\n");
	}
	else if(week==5)
	{
		printf("friday\n");
	}
	else if(week==6)
	{
		printf("saturday\n");
	}
	else if(week==7)
	{
		printf("sunday\n");
	}
	else
	{
		printf("Invalid week day");
	}
	printf("Thank you!visit again:");
	return 0;
	
	
}
