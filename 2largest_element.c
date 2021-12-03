#include<stdio.h>
void largest_number(int ar[],int n)
{
   int i,j,max1,max2;
    for(i=0;i<=n;i++)
     {
       if(ar[i]>max1)
         {
           max2=max1;
            max1=ar[i];
         }
        else if
          (ar[i]>max2&&ar[i]<max1)
          {
             max2=ar[i];
         }
     }
}
int main()
{
   int ar[50],n,i;
     printf("how many elements in array");
     scanf("%d",&n);
     printf("enter the elements in array");
     for(i=0;i<=n;i++)
     scanf("%d",&ar[i]);
     largest_number(ar[i],n);
return 0;
}
    
