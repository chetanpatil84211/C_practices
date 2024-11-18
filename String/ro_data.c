#include<stdio.h>
int main()
{
   char *s="HI!";

   printf("%c",*s);
   printf("%c",*(s+1));
   printf("%c",*(s+2));

   printf("\n");

   printf("%s\n",s);
   return 0;
   }
