#include<stdio.h>
void sumdigit(int n)
{
 int sum=0;
do
  { 
   sum=sum+n%10;
   n=n/10;
  printf("the sum is=%d\n",sum);
  }
while(n>0);
}
int main()
{
   int num;
  printf("enter the number");
  scanf("%d",&num);
  sumdigit(num);
return 0;
}
