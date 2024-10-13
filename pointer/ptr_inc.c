#include<stdio.h>
int main()
{
  int *ptr=100;

  printf("ptr = %u\n",ptr);

  printf("ptr+1 = %u\n",ptr+1);

  printf("ptr-1 = %u\n",ptr-1);

  printf("ptr+3 = %u\n",ptr+3);

  printf("ptr-3 = %u\n",ptr-3);


  return 0;

  }

  /* output
ptr = 100
ptr+1 = 104
ptr-1 = 96
ptr+3 = 112
ptr-3 = 88
*/
