#include<stdio.h>
void printstr(char ptr[]);
int main()
{
  char str[]="Charles_Babbage";
  printf("string is %s\n",str);

  printstr(str);

  return 0;
  }

  void printstr(char ptr[])
  {
   printf("string  is : %s\n",ptr);
  }
