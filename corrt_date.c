#include<stdio.h>
void date_correct_or_not(int,int,int);
void date_correct_or_not(int d,int m,int y)
{
   if(d>=1&&d<=31)
    printf("date is valid");
   else if(m>=1&&m<=12)
    printf("month is valid");
   else if(y>=1990&&y<=2021)
      printf("year is valid");
  else
     printf("not valid : ",d,m,y);
     printf("%d-%d-%d",d,m,y);
}
   int main()
{
   int day,month,year;
   printf("enter the day(1-31) : ");
   scanf("%d",&day);
   printf("enter the month(1-12) : ");
   scanf("%d",&month);
   printf("enter the year(1990-2021) : ");
   scanf("%d",&month);
   date_correct_or_not(day,month,year);
return 0;
}

  




   
