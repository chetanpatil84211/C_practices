#include<stdio.h>
int main()
{
  int a=5,*ptr;
  ptr=&a;

  printf("Enter a number : ");
  scanf("%d",ptr);

  printf("%d  %d\n",a,*ptr);

  return 0;

  }

  /*
  Enter a number : 16
16  16

*/
