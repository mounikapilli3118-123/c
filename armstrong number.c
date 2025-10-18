#include<stdio.h>
#include<math.h>
int main()
{
	int n,s=0,r,t,dig=0;
	printf("Enter n value:");
	scanf("%d",n);
	t=n;
	while(t>0)
	{
		r=t%10;
		dig=dig+1;
	}
	t=n;
	while(t>0)
	{
		r=t%10;
		s=s+pow(r,dig);
	}
	if(n==s)
	printf("%d is Armstrong num",n);
	else
	printf("%d is not a armstrong num",n);
    printf("Tq");
    return 0;
}
	
	    
	    
	

