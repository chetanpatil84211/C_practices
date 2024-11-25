#include<stdio.h>
int main()
{
  int arr[2][3],i,j;

  for(int i=0;i<2;i++)
    {
	  for(int j=0;j<3;j++)
	    {
		  printf("arr[%d][%d]: ",i,j);
		  scanf("%d",&arr[i][j]);
		}
	 }

	 printf("Array :\n");

	 for(int i=0;i<2;i++)
	   {
	     for(int j=0;j<3;j++)
		   {
		    printf("%d ",arr[i][j]);
		    }
			printf("\n");
	    }
         
		 printf("Transpose Array:\n");

		 for(int i=0;i<3;i++)
		   {
		     for(int j=0;j<2;j++)
			   {
			     printf("%d\t",arr[j][i]);
			    }
				printf("\n");
		     }

			 return 0;
			 }
