#include<stdio.h>
void evenodd(int a[],int n)
{
  int i,even=0,odd=0;   
   for(i=0;i<n;i++)
  {
    if(a[i]%2==0)
       even++;
       else
       odd++;
  }
     printf("even number in array : %d",even);
     printf("odd number in array :%d",odd);
}
int main()
{
  int a[10],n,i;
  printf("enter the how many element in array");
  scanf("%d",&n);
  printf("enter the element in array");
    for(i=0;i<n;i++)
    scanf("%d",&a[i]);
     evenodd(a,n);
}
