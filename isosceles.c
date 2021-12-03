#include<stdio.h>
void checktriangle(int x,int y,int z)
{
   if(x==y&&y==z)
      printf("equilateral triangle");
   else if(x==y||y==z||z==x)
      printf("isosceles triangle");
  else 
     printf("scalene triangle");
 }
int main()
{
   int a,b,c;
    printf("enter the size of  triangle");
    scanf("%d%d%d",&a,&b,&c);
    checktriangle(a,b,c);
return 0;
}
