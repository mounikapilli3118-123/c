#include<stdio.h>
int main()
{
	int units;
	float amount;
	printf("Enter no of units:");
	scanf("%d",&units);
	if(units<=30)
	{
		amount=units*2.50;
	}
	else if(units<=70)
	amount=30*2.5+(units-30)*4.00;
	else if(units<=150)
	amount=75+160+(units-70)*6.00;
	else if(units<=250)
	amount=75+160+480+800+(units-250)*8.00;
	else
	amount=75+160+480+800+(units-250)*10.00;
	printf("Tq");
	return 0;	
}
