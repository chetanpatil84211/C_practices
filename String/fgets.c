#include<stdio.h>
int main()
{
  char str[20];

  //taking input string
   printf("Enter a string : ");
   fgets(str,20,stdin);
   
   printf("str is : %s\n",str);
   puts(str);

   printf("\n");

   return 0;
   }

