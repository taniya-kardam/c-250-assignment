#include<stdio.h>
void pattern();
  void pattern()
 {
    int i,j;
       for(i=1;i<=9;i++)
   {
          for(j=1;j<=9;j++)
      {
          if(i<9-j)
           printf("*");
         else
          printf(" ");
      }
         printf("\n");
   }
}
int main()
{
   pattern();
   printf("inverted right triangle star pattern");
  return 0;
}

