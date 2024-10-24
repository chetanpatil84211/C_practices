#include<stdio.h>

int main()
{

   char ch;

   printf("Enter a character :  ");
   scanf("%c",&ch);

   if(ch  >='A' && ch <='Z')
     {
	  printf("Character  is Upper case\n");
	  printf("Character is :%c\n",ch);
	 }
	else if(ch >='a' && ch  <='z')
	 {
	  printf("Character is Lower case\n");
	  printf("Character is :%c\n",ch);
	  }
	  else
	  {
	   printf("Not a English Letter \n");
	   printf("Not English letter :%c\n",ch);
	  }


	  return 0;
 }

