#include<stdio.h>
 void fibonacci(int n)
{
   int i=1,f,f1,f2;
   f=0;
   f1=1;
   f2=1;
do
{
   i++;
       printf("%d\n",f);
        f1=f2;
        f2=f;
        f=f1+f2;
}
  while(i<=n);
} 
int main()
{
   int num;
    printf("enter the number");
     scanf("%d",&num);
       fibonacci(num);
return 0;
}

