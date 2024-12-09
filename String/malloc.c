#include<stdio.h>
#include<stdlib.h>
int main()
{
  char *str;

   str=(char*)malloc(10);
   printf("Enter a string : ");
   scanf("%s",str);
   printf("string is :%s\n",str);
  

  
   return 0;
  }
  
