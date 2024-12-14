#include<stdio.h>
int main()
{
  int arr[]={2,4,6,8,10};
  printf("address:%u\n",arr);
  printf("mcq:%u\n",&arr+1);
  printf("mcq1:%u\n",&arr+2);
  printf("mcq2:%u\n",&arr+3);


  return 0;
  }

/*
address:3705538352
mcq:3705538372
mcq1:3705538392
mcq2:3705538412
*/
