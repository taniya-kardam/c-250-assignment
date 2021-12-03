#include<stdio.h>
void profit_loss(int cp,int sp)
{
int amt;
  if(sp>cp)
{
   amt=sp-cp;
   printf("profit=%d",amt);
}
   else if(cp>sp)
  { 
      amt=cp-sp;
        printf("loss=%d",amt);
  }
   else
       printf("no profit no loss");  
}
  int main()
{
   int s,c,amt;
     printf("enter the costprice");
     scanf("%d",&c);
     printf("enter the sellingprice");
     scanf("%d",&s);
     profit_loss(c,s);
return 0;
}




