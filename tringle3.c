#include<stdio.h>
int all_sides_triangle(int,int,int);
int all_sides_triangle(int a1,int a2,int a3);
  if(a1+a2>a3)
  {
      if ((a2+a3)>a1)
   {
       if((a1+a3)>a2)
       {
          printf("triangle is valid");
       }
 else
     printf("triangle is not valid");
  }
      else 
        printf("triangle is not valid");
}
   int main()
{ 
   int x,y,z;
          printf("enter the slides of triangle x,y,z");
           scanf("%d%d%d",&x,&y,&z);
          all_sides_triangle(x,y,z);
}
