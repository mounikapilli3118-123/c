#include<stdio.h>
int main() 
{
  int f,c;
  float F,C;
  printf("Enter the values of f,c:");
  scanf("%d%d",&f,&c);
  C=(f-32)/1.8;
  F=c*1.8+32;
  printf("fahrenhiet is %.2f,celsius=%.2f",F,C);
  return 0;
}

