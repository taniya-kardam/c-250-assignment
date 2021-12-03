#include<stdio.h>
void pattern();
  void pattern()
 {
    int i,j;
       for(i=1;i<=4;i++)
   {
          for(j=1;j<=4;j++)
      {
          if(j==1||i==4||i==j)
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
   printf("right angle triangle");
  return 0;
}

