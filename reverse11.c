#include<stdio.h>
int reversenumber(int);
int reversenumber(int n)
{
   int rev,rem;
  do
{
   rem=n%10;
   rev=rev*10+rem;
   n/=10;
   printf("reverse number=%d",rev);
}
   while(n!=0);
return rev;
}
   int main()
{
    int num;
      printf("enter the number :");
      scanf("%d",&num);
      reversenumber(num);
}
            

