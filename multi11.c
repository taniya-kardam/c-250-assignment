#include<stdio.h>
void multipication( int n)
{
int i;
if(n<=0)
{
  for(i=1;i<=10;++i)
   printf("%d*%d=%d\n",n,i,n*i);
 }
   else 
  printf("invaild input");
}
int main()
{
   int n;
     printf("enter the number");
     scanf("%d",&n);
     multipication(n);
return 0;
}
