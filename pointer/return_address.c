#include<stdio.h>
int *fun();

int main()
{
  int *ptr;

  ptr=fun();

  printf("ptr=%p\n",ptr);
  printf("*ptr=%d\n",*ptr);


  return 0;
  }

  int *fun()
  {
    int A=10;
	return(&A);
  }



 /*
   return_address.c:20:16: warning: function returns address of local variable [-Wreturn-local-addr]
   20 |         return(&A);

  ptr=(nil)
Segmentation fault (core dumped)
*/

