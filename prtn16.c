#include<stdio.h>
void pattern();
  void pattern()
 {
    int i,j,space;
    for(i=1;i<=4;i++)
   {
      for(space=4; space>i; space--)
         printf(" ");
      
      for(j=1;j<=2*i-1;j++)
      {
         printf("*");
      }
     printf("\n");
   }
   for(i=3;i>=1;i--){
       for(space=3;space>=i;space--)
         printf(" ");
       for(j=1;j<=2*i-1;j++)
        printf("*");
      printf("\n") ;
   }
}
int main()
{
   printf("daimond start pattern\n");
   
  pattern();
  return 0;
}

