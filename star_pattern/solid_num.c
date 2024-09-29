#include<stdio.h>
int main()
{  int row,column;
   printf("Enter a row and column : \n");
   scanf("%d%d",&row,&column);
  for(int i=1;i<=row;i++)
      { 
	    int a=1;
	   for(int j=1;j<=column;j++)
	     {
		   printf("%d ",a++);
		  }
		 printf("\n");
	 }

	return 0;
	}
