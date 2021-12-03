#include<stdio.h>
char vowel(char);
char vowel(char ch)
{
 if(ch=='a'||ch=='e'||ch=='i'||ch=='o'||ch=='u')
       printf("character is vowel");
 else 
 printf("character is not vowel");
return ch;
}
   int main()
{
  char c;
       printf("enter the vowel charater");
       scanf("%c",&c);
            vowel(c);
return 0;
}
