#include<stdio.h>
int week(int);
int week(int a)
{
int week;
 if(week==1)
   printf("monday");
   else if(week==2)
      printf("teusday");
   else if(week==3)
      printf("wednesday");
   else if(week==4)
      printf("thusday");
   else if(week==5)
      printf("friday");
   else if(week==6)
      printf("saturday");
   else if(week==7)
     printf("sunday");
return a;
}
int main()
{
 int a;
  printf("enter the week day number(1-7) :");
  scanf("%d",&a);
  week(a);
return 0;
}

