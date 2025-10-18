#include<stdio.h>
int main()
{
	int a,b;
	char n;
	printf("Enter two values:");
	scanf("%d%d",&a,&b);
	fflush(stdin);
	printf("Enter arithmetic operator:");
	scanf("%c",&n);
	switch(n)
	{
		case '+': printf("ADD is %d\n",a+b);break;
		case'-': printf("SUB is %d\n",a-b);break;
		case'*': printf("MUL is %d\n",a*b);break;
		case'/': printf("DIV is %d\n",a/b);break;
		case'%': printf("MOD is %d\n",a%b);break;
		default:
		printf("Invalid operator\n");
	}
	printf("TQ");
	return 0;
	}

