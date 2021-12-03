#include<stdio.h>
void pattern();
  void pattern()
 {
    int i,j;
       for(i=1;i<=9;i++)
   {
          for(j=1;j<=8;j++)
      {
          if(i==1||j==1||i==9||j==8||i==j||j==9-i)
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
   printf("hollow squre star");
  return 0;
}

