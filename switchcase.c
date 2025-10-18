#include<stdio.h>
int main()
{
	 int a,b;
	 char n;
	 printf("Enter two values:");
	 scanf("%d %d,&a,&b");
	 fflush(stdin);
	 printf("Enter the arithmetic operator:");
	 scanf("%c",&n);
	 switch(n)
	 {
	 	case '+':printf("ADD is %d\n",a+b);
	 	break;
	 	case'-': printf("sub is %d\n",a-b);
	 	break;
	 	case'*': printf("mul is %d\n",a*b);
	 	break;
	 	case'/': printf("div is %d\n",a/b);
	 	break;
	 	case'%': printf("MOD is %d\n",a%b);
	 	break;
	 	default:
	 	printf("Invalid operator!\n");
	 }
	 		return 0;
	 	
	 	
	 }
