#include<stdio.h>
void decending(int a[],int n)
{
   int i,j,t;
     for(i=0;i<n;i++)
   {
     for(j=i+1;j<n;j++)
    {
        if(a[i]<a[j])
        {
           t=a[i];
           a[i]=a[j];
           a[j]=t;
        }
     }
  } 
      printf("array in decending order\n");
         for(i=0;i<n;++i)
          printf("%d\n",a[i]);
}
 int main()
{
   int a[100],n,i;
    printf("enter the how many elements in array");
    scanf("%d",&n);
    printf("enter the elements in array");
    for(i=0;i<n;i++) 
    scanf("%d",&a[i]);
    decending(a,n);
return 0;
}
                                                                                                                                                                                                     
