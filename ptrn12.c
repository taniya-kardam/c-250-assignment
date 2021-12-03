#include<stdio.h>
void add(int,int);
void add(int x,int y)
{
  int z;
  z=x+y;
  printf("add:%d",z);
}
int main()
{
  int a,b;
  printf("enter the number");
  scanf("%d%d",&a,&b);
  add(a,b);
return 0;
}
