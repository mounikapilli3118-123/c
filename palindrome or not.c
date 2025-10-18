#include<stdio.h>
int main()
{
	int n,rev=0,r,t;
	printf("Enter n value:");
	scanf("%d", &n);
	t=n;
	while(t>0)
	{
		r=t%10;
		rev=rev*10*r;
	}
	if(n==rev);
	{
		printf("%d is a palindrome",n);
	}
	  else
	{
		printf("%d is not a palindrome",n);}   
	}
	printf("Tq");
	return 0;
}
}
