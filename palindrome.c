#include<stdio.h>
int palindrome(int);
int palindrome(int n)
{
   int r,s,v;
    v=n;
    while(n!=0)
{
    s =n%10;
     r=r*10+s;
     n/=10;
}
     if(v==r)
         printf("%d is a palindrome",v);
    else 
       printf("%d is not a palindrome",v);
return v;
}
int main()
{
   int num;
    printf("enter the number");
    scanf("%d",&num);
    palindrome(num);
}


      

