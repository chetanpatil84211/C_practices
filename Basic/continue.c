//continue statement with for loop

#include<stdio.h>
int main()
{
  for(int i=1;i<=10;i++)
   {
     if(i==5)
	  {
	   continue;
	   }

	 printf("%d\t",i);
	}

	return 0;

	}

//output 1	2	3	4	6	7	8	9	10
