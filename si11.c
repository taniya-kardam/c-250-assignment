#include<stdio.h>
 simple_int(int p,int r,int t)
{
   int si,n;
do
 {
   si=(p*r*t)/100;
     printf("simple interest :",si);
  }
}
while(n!=0);
   int main()
  {
      int a,b,c,interest;
      printf("\n enter the principle : ");
      scanf("%d",&a);
        printf("\n enter the rate : ");
      scanf("%d",&b);
        printf("\n enter the time : ");
      scanf("%d",&c);
    interest=simple_int(a,b,c);
    printf("simple interest :",interest);
return 0;
}
      
