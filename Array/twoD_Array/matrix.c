#include<stdio.h>
int main()
{
  int m,n;
  printf("Enter a size of array element(rom and column) : ");
  scanf("%d%d",&m,&n);

  int arr[m][n];

  for(int i=0;i<m;i++)
    {
	  for(int j=0;j<n;j++)
	    {
		  printf("arr[%d][%d]: ",i,j);
		  scanf("%d",&arr[i][j]);
		}
	}

	printf("print 2D array : \n");

	for(int i=0;i<m;i++)
	  {
	   for(int j=0;j<n;j++)
	     {
		  printf("%d ",arr[i][j]);
		 }
		printf("\n");
	  }

	  return 0;

	 }
