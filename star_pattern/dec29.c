#include<stdio.h>
int main()
{
  int row;
  printf("Enter a row : ");
  scanf("%d",&row);
   int i=1;
      while(i<=row)
	    {
		     int j=1;
			 char start='A'+row-i;
              while(j<=i)
			   {
			      printf("%c",start); 
				 j++;
			    start++;
			  }
			   printf("\n");
     
		  i++;
		 }


    return 0;
}
