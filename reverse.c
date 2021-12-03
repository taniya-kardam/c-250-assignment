#include<stdio.h>
int reversenumber(int);
int reversenumber(int n)
{
   int rev,rem;
   while(n!=0)
{
   rem=n%10;
   rev=rev*10+rem;
   n/=10;
}
     printf("reverse number=%d",rev);
return rev;
}
   int main()
{
    int num;
      printf("enter the number :");
      scanf("%d",&num);
      reversenumber(num);
}
            

