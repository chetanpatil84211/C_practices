#include<stdio.h>
void f(int *p,int *q)
{
 p=q;
 *p=2;
 }

 int i=0,j=1;

 int main()
 {
  f(&i,&j);

  printf("i=%d j=%d\n",i,j);

  return 0;
  }
// i=0 j=2
