#include<stdio.h>
void calculate_persentage(int a,int b,int c,int d,int e)
{
    int sum,per;
     sum=a+b+c+d+e;
     per=(sum*100)/sum;
  printf("persentage is :%d",per);
 }
   int main()
{ 
  int p1=67,p2=78,p3=65,p4=49,p5=56;
   calculate_persentage(p1,p2,p3,p4,p5);
return 0;
}

    
