#include<stdio.h>

int main()
{
  char str[20]="Patil ";
  char str1[]="Chetan";

  printf("str is : %s\n",str);
  printf("str1 is : %s\n",str1);
  
  int i,j;

  for(i=0;str[i] !='\0';i++);

  for(j=0;str1[j] !='\0';i++,j++)
    {
	  str[i]=str1[j];
	}

	str[i]='\0';

   printf("str is : %s\n",str);
   printf("str1 is : %s\n",str1);

   return 0;

  }

