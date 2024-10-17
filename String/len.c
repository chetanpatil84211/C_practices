#include<stdio.h>
#include<string.h>

int main()
{
  char str[]="Documents";
   
   int count=0;

  for(int i=0; str[i] !='\0'; i++)
    {
	  count++;
	 }

   printf("length is %d\n",count);

   printf("Using strlen : %ld\n",strlen(str));
	 
	 return 0;
}
	 
