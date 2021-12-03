#include<stdio.h>
void pattern();
  void pattern()
 {
    int i,j;
       for(i=1;i<=9;i++)
   {
          for(j=1;j<=i;j++)
      {
           printf("*");
          printf(" ");
      }
         printf("\n");
   }
}
int main()
{
   pattern();
   printf("right triangle star");
  return 0;
}

