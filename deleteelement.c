#include<stdio.h>
void deleteelement(int ar[],int n,int value)
{
   int i,j,index=9;
  for(i=0;i<=index;i++)
  {
     if(ar[i]==value)
    {
       for(j=i+1;j<=index;j++)
          ar[j-1]=ar[j];
    }
  }
}
int main()
{ 
   int ar[50],n,value,i;
     printf("how many elements in array");
     scanf("%d",&n);
     printf("enter the elements in array");
     for(i=0;i<=n;i++)
     scanf("%d",&ar[i]);
     printf("enter the value ot delete");
     scanf("%d",&value);
     deleteelement(ar[50],n,value);
return 0;
}

