#include<stdio.h>
void pattern();
  void pattern()
 {
    int i,j;
       for(i=1;i<=8;i++)
   {
          for(j=1;j<=8;j++)
      {
          if(i==8||j==8||i==1||j==1)
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
   printf("hollow squre");
  return 0;
}

