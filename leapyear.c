#include<stdio.h>
int leapyear(int);
int leapyear(int y)
{
  if((y%400==0)||((y%4==0)&&(y%100!=0)))
       return 1;
   else 
       return 0;
}
int main()
{
int year;
    printf("enter the year");
    scanf("%d",&year);
       leapyear(year);
         if(leapyear(year))
          printf("leapyear");
        else
          printf("not a leapyear");
 return 0;
}
