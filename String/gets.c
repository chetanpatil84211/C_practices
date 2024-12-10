#include<stdio.h>
#include<string.h>
int main()
{
   int marks;
   char name[50];
   printf("Enter marks:  ");
   scanf("%d",&marks);

   printf("Enter name : ");
   gets(name);
   puts(name);

   return 0;
   }

/*
scanf() returns the newline character my be left unread 
in input stream and newline character is read
by gets().the function gets() terminates and 
does not read the string that we enter.so it is
not good idea to mix scanf() and gets()
*/
//output 
//Enter marks:  77
//Enter name : 

