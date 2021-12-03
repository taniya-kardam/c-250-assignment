#include<stdio.h>
void votingchecker(int);
void votingchecker(int age)
{
  if(age >=18)
    printf("eligible for voting");
  else
    printf(" not eligible for voting");
}
int main()
{
   int a;
      printf("enter the age");
      scanf("%d",&a);
     votingchecker(a);
}
    
