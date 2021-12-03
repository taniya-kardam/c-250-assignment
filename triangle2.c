#include<stdio.h>
int trianglevaild(int,int,int);
int trianglevaild(int a1,int a2,int a3)
{
    int sum;
   sum=a1+a2+a3;
     if(sum=180)
     printf("triangle is vaild");
   else
     printf("triangle is not vaild");
return sum;
}
   int main()
{
   int x,y,z;
      printf("enter the angle of triangle");
      scanf("%d%d%d",&x,&y,&z);
     trianglevaild(x,y,z);
}

