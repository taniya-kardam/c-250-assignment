#include<stdio.h>
void countnumber(int);
void countnumber(int n)
{
   int count=0;
   while(n!=0)
{
   n/=10;
   ++count;
}
   printf("number of digit : %d",count);
 }
 int main()
 {  
    int num;
    printf("enter the number");
    scanf("%d",&num);
     countnumber(num);
}
