#include<stdio.h>
int main()
{
	int a[20],n,i,x;
	printf("Enter size of an array:");
	scanf("%d",&n);
	printf("Enter %d elements\n",n);
	x=2;
	for(i=0;i<n;i++)
	{
		a[i]=x;
		x=x+2;
	}
		printf("Array elements are:\n");
		for(i=0;i<n;i++)
		{
			printf("a[%d]=%d\n",i,a[i]);
		}
		return 0;
	}
