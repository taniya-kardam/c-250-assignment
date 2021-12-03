#include<stdio.h>
int biggestnumber(int,int,int);
int biggestnumber(int a,int b,int c)
{
 if(a>b)
{
   if(a>c)
    return a;
  else
       return c;
}
  else 
   if(b>c)
   {
      return b;
  }
       else
          return c;
   }
int main()
{
int a,b,c,result;
  printf("enter the number\n");
  scanf("%d%d%d",&a,&b,&c);
result=biggestnumber(a,b,c);
printf("%d is a biggest number :",result);
return 0;
}

