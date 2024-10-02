#include<stdio.h>
int main()
{  int a,rows;
   
   printf("Enter a rows : \n");
   scanf("%d",&rows);
  for(int i=1;i<=rows;i++)
    {
	  if(i%2 !=0)
	        a=1;
	  else
	       a=0;
	   for(int j=1;j<=i;j++)
	     {
		   printf("%d ",a);
		   if(a==0) a=1;
		   else a=0;
		  }
		  printf("\n");
		}
	
	return 0;
}
/*  rows=6
1
0 1
1 0 1
0 1 0 1
1 0 1 0 1
0 1 0 1 0 1

*/
