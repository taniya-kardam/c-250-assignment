#include<stdio.h>
void calculate(char x)
{
  int n1,n2,result;
  switch(x)
{
  case '+': printf("enter two numbers.");
   scanf("%d%d",&n1,&n2);
    result=n1+n2;
   printf("sum of given no.is %d,result");
 case '-': printf("enter two numbers.");
   scanf("%d%d",&n1,&n2);
    result=n1-n2;
   printf("subtraction of given no.is %d,result");
 case '*': printf("enter two numbers.");
   scanf("%d%d",&n1,&n2);
    result=n1*n2;
   printf("multipication  of given no.is %d,result");
 case '/': printf("enter two numbers.");
   scanf("%d%d",&n1,&n2);
    result=n1/n2;
   printf("division of given no.is %d,result");
 case '=': printf("enter two numbers.");
   scanf("%d%d",&n1,&n2);
    result=n1==n2;
   printf("equal of given no.is %d,result");
 case '%': printf("enter two numbers.");
   scanf("%d%d",&n1,&n2);
    result=n1%n2;
   printf("remainder of given no.is %d,result");
   break;
   default:
      printf("invalid");
  }
}
int main()
{
 char operator;
printf("enter the operator");
scanf("%c",&operator);
  calculate(operator);
return 0;
}


