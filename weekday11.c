#include<stdio.h>
 void week(int);
void week(int week)
{
switch(week)
{
 case 1:
   printf("monday");
   break;
   case 2:
      printf("teusday");
      break;
   case 3:
      printf("wednesday");
       break;
   case 4:
      printf("thusday");
        break;
   case 5:
      printf("friday");
        break;
   case 6:
      printf("saturday");
         break;
  case 7:
     printf("sunday");
         break;
       default:
     printf("invalid days");
}
}
int main()
{
 int a;
  printf("enter the week day number(1-7) :");
  scanf("%d",&a);
  week(a);
return 0;
}

