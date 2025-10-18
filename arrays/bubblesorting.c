#include<stdio.h>
int main()
{
	int a[5],n,i,j,t;
	printf("Enter size of an array:");
	scanf("%d",&n);
	printf("Enter %d elements:\n");
	for (i=0;i<n;i++)
	{
		scanf("%d",&a[i]);
	}
	printf(" Elements Before sorting:\n");
	for(i=0;i<n;i++)
	{
		printf("%d",a[i]);
	}
		for(j=0;j<n;j++)
		{
			if(a[j]>a[j+1])
		{
			t=a[j];
			a[j]=a[j+1];
			a[j+1]=t;
		}
	}
				printf("\nAfter sorting:\n");
			for(i=0;i<n;i++)
			printf("%d",a[i]);
			return 0;
		}
	}

	



