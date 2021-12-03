#include<stdio.h>
void countnumber(int);
void countnumber(int n)
{
   int count=0;
  if(n!=0)
{
   n/=10;
   ++count;
   printf("number of digit : %d",count);
}
else
   printf("invaild input");
 }
 int main()
 {  
    int num;
    printf("enter the number");
    scanf("%d",&num);
     countnumber(num);
}
