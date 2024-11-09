#include<stdio.h>

 int main()
  {
     int x=(1,2,3);
	 
	/*  int x=1,2,3;

	demo3.c:7:19: error: expected identifier or ‘(’ before numeric constant
    7 |           int x=1,2,3;
      |                   ^

     */
	 while(x)
	  {
	     printf("%d\t",x);
		 x--;
	  }

	return 0;

  
  }

  //3	2	1
