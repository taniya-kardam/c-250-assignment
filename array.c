#include<stdio.h>
void short_array(int a,int b,int c,int d,int e)
{
   int i,j,,n,a,num[30];
    printf("enter the num[i] : ");
     for(i=0;i<n;++i)
 {
          scanf("%d",&num[i]);
           for(i=0;i<n;++i)
     {
               for(j=i+1;j<n;++j)
             {
                 if(num[i]<num[j])
                     a=num[i];
                     num[i]=num[j];
                     num[j]=a;
              }
     }  
 }

    int main()
 {
       int n,j,k,l,m;
        printf("enter the number");
        scanf("%d%d%d%d%d",&J,&k,&l,&m,&n);
        short_array(j,k,l,m,n);
return 0;
}

    
