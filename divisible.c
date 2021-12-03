#include<stdio.h>
void number_divisible(int);
void number_divisible(int num)
{
   if((num%5==0)&&(num%11==0))
      printf("given number is divisible by 5 and 11",num);
  else
     printf("given number is not divisible by 5 and 11",num);
}
  int main()
{
    int n;
      printf("enter the number : ");
      scanf("%d",&n);
      number_divisible(n);
 return 0;
}

