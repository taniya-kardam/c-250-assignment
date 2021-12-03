#include<stdio.h>
void gcdnum(int n);
int i,sum;
   for(i=1;i<=n;i++)
{
   sum=n+i;
   printf("sum=%d",sum);
 }
   int main()
{
   int num;
     printf("enter the number");
     scanf("%d",&num);
     gcdnum(num);
return 0;
}


