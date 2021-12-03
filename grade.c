#include<stdio.h>
void grade(int s)
{
   switch(s%10)
 {
   case 10:
   case 9:
      printf("grade : A");
      break;
   case 8:
       printf("grade : B");
       break;
  case 7:
       printf("grade : C");
       break;
 case 6:
       printf("grade : D");
       break;
case 5:
       printf("grade : E");
       break;
       default:
        printf("grade : F");
  }
}
  int main()
{
  int score;
   printf("enter the score(0-100) : ");
   scanf("%d",&score);  
   grade(score);
}    






