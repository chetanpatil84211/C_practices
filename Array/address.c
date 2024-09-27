#include<stdio.h>
int main()
{

  int arr[]={2,4,6,8};

  printf("arr address %p\n",&arr);
  printf("arr address %u\n",&arr);

  printf("first elements %p\n",&arr[0]);
  printf("first elements %u\n",&arr[0]);

/*arr address 0x7fff28af4ea0
arr address 682577568
first elements 0x7fff28af4ea0
first elements 682577568
 */


  return 0;


  }

