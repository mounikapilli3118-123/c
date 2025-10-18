#include<stdio.h>
int main()
{
	int a[3],n,i;
	printf("Enter size of an array:");
	scanf("%d",&n);
	printf("Enter %d elements\n",n);
	for(i=0;i<n;i++)
	{
		scanf("%d",&a[i]);
	}
		printf("Array elements are:\n");
		for(i=0;i<n;i++)
		{
			printf("a[%d]=%d\n",i,a[i]);
		}
		return 0;
	}
	
	

