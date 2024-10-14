// register is invalid

#include<stdio.h>
int main()

{
  // Declaring register variable i and initializing 

  register int i=10;

  int *a=&i;

  printf("%d\n",*a);

  return 0;

  }

