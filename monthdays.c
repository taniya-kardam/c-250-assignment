#include<stdio.h>
void days_in_month(int n)
{
 switch(n)
{
    case 1:
      printf("31 days in this month");
      break;
 case 2:
      printf("28 days in a normal year in this month");
      break;
 case 3:
      printf("31 days in this month");
      break;
 case 4:
      printf("30 days in this month");
      break;
 case 5:
      printf("31 days in this month");
      break;
 case 6:
      printf("30 days in this month");
      break;
 case 7:
      printf("31 days in this month");
      break;
 case 8:
      printf("31 days in this month");
      break;
 case 9:
      printf("30 days in this month");
      break;
 case 10:
      printf("31 days in this month");
      break;
 case 11:
      printf("30 days in this month");
      break;
 case 12:
      printf("31 days in this month");
      break;
      default:
       printf("invalid month");
}
}
int main()
{
 int m;
   printf("enter the month number");
    scanf("%d",&m);
    days_in_month(m);
return 0;
}




