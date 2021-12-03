#include<stdio.h>
char alphabet_or_not(char);
char alphabet_or_not(char ch)
{
   if(ch>='A'&&ch<='Z'||ch>='a'&&ch<='z')
       printf("character is an alphabet",ch);
   else 
          printf("character is not an alphabet",ch);
return ch;
}
int main()
{
    char c;
      printf("enter the charater");
      scanf("%c",&c);
      alphabet_or_not(c);
return 0;
}
