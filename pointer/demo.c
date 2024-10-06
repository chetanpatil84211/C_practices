#include<stdio.h>
int main()
{
  int num=38;
  int *ptr=&num;


  printf("ptr=%p\n",ptr);
  printf("num address=%p\n",&num);
  printf("ptr address=%p\n",&ptr);
 
   
   


  return 0;
  }
