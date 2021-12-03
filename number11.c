#include<stdio.h>
void maxium_minium(int n)
{
 int a1,a2;
  switch(n%2)
  {
   case 0:
    printf("%d is even number",n);
    break;
   case 1:
    printf("%d is odd number",n);
   }
}
int main()
{
   int a;
 printf("enter the number");
 scanf("%d",&a);
maxium_minium(a);
return 0;
}

