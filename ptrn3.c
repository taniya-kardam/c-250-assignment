#include<stdio.h>
void pattern();
  void pattern()
 {
    int i,j;
       for(i=1;i<=8;i++)
   {
          for(j=1;j<=8;j++)
      {
           printf("*");
      }
         printf("\n");
   }
}
int main()
{
   pattern();
   printf("square star pattern");
  return 0;
}

