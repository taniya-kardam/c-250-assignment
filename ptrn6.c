#include<stdio.h>
void pattern();
  void pattern()
 {
    int i,j;
       for(i=1;i<=9;i++)
   {
          for(j=1;j<=9;j++)
      {
          if(j>9-i)
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
   printf("mirrored right triangle");
  return 0;
}

