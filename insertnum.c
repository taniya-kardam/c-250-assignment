#include<stdio.h>
void insertnumber(int arr[],int pos,int n,int val)
{
int i;
     for(i=n-1;i>=pos;i--)
    {
      arr[i+1]=arr[i];
   }
      arr[pos-1]=val;
      printf("update array : \n");
     for(i=0;i<=n;i++) 
     {
         printf("%d\n",arr[i]);
     }
}
int main()
{
   int arr[50],i,n,val,pos;
     printf("enter the  how many number in array:\n");
     scanf("%d",&n);
     printf("enter the elements");
     for(i=0;i<n;i++)
      scanf("%d",&arr[i]);
      printf("enter position to insert your element : \n");
      scanf("%d",&pos);
      printf("enter the value");
      scanf("%d",&val);
      insertnumber(arr,pos,n,val);
return 0;
}

