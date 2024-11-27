#include<stdio.h>
void find_absolute(int num);

int main()
{
  int num=-12;
  printf("num=%d\n",num);

  find_absolute(num);

  return 0;
 }

 void find_absolute(int num)
  {
    if(num<0)
	  {
	    num=(-1)*num;
	   }
	printf("num=%d\n",num);

   }
