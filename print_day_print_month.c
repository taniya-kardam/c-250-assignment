#include<stdio.h>
 void print_day_month(int);
 void print_day_month(int a)
{
   if(a==1||a==3||a==5||a==7||a==8||a==10||a==12)
     printf("31 days in this month : ");
    else if
     (a==4||a==6||a==9||a==11)
     printf("30 days in this month : ");
    else
      (a==2);
        printf("28 days in this month in common years : ");
}
  int main()
{
   int num;
      printf("enter the number");
      scanf("%d",&num);
      print_day_month(num);
return 0;
}



