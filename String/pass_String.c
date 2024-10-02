#include<stdio.h>
void printstring(char *str);
int main()
{
  char arr[]="String";
  printf("main string= %s\n",arr);
  printf("Address is %p\n",arr);
  printstring(arr);
  return 0;
  
 }

  void printstring(char *str)
   {  int i=0;
     while(str[i] !='\0')
	  {
	   printf("%c",str[i]);
	   i++;
	  }

	  printf("printstring  =%s\n",str);
	  printf("Address is printstring=%p\n",str);
	 }

