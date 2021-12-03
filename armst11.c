#include<stdio.h>
int armstrong(int);
int armstrong(int a)
{
int s=0,r,n,temp;
do
  if(n!=0)
{
  temp=n;
  n%10;
  s=s+r*r*r;
     printf("armstrong");
}
else
    printf("not armstrong");
while(s==temp);
}
int main()
{
   int a;
printf("enter theb number");
scanf("%d",&a);
  armstrong(a);
return 0;
}

