#include<stdio.h>
void evenodd(int a)
{
do
  {
      if(a%2==0)
           printf("number is even");
    else
          printf("number is odd");
   }
while(0);
}
int main()
{ 
   int n;
     printf("enter the number");
     scanf("%d",&n);
     evenodd(n);
return 0;
}
