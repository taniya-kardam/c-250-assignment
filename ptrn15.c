#include<stdio.h>
int max(int,int);
int max(int a,int b)
{
    if(a>b)
return a;
 else 
 return b;
}
int main()
{ 
  int a,b,c,d,x,n;
   a=10;
   b=70;
   c=30;
   d=40;
x=max(max(a,b),max(c,d));
printf("%d",x);
return 0;
}
