#include<stdio.h>
int main()
{
  char str[]="sunbeam";
  
  printf("str is : %s\n",str);
  
  char *ptr=str;

  while(*ptr !='\0')
   {
    printf("%c",*ptr);

	//moving pointer to next character
	ptr++;
	}
    printf("\n");
	//using for loop
	printf("Using for loop \n");

	for(int i=0;str[i] !='\0';i++)
	  {
	    printf("%c",str[i]);
	}
	printf("\n");
	return 0;
	}
