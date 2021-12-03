#include<stdio.h>
int evenodd(int);
int evenodd(int n)
{
   if(n%2==0)
    return 0;
   else
    return 1;
}
int main()
{
 int n;
  printf("enter number");
  scanf("%d",&n);
  if(evenodd(n))
    printf("even");
  else
     printf("odd");
return 0;
}




