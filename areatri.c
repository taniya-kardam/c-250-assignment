#include<stdio.h>
int area_of_triangle(int,int,int);
int area_of_triangle(int a,int b,int c)
{
  int s,p;
   s=(a+b+c)/2;
   p=(s*(s-a)*(s-b)*(s-c));
    printf("area ofthe triangle =%d\n",p);
  return p;
}
  int main()
{
    int x,y,z;
     printf("enter the all sides of a triangle");
     scanf("%d%d%d",&x,&y,&z);
     area_of_triangle(x,y,z);
  }

 
