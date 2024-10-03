#include<stdio.h>
int main()
{
  int arr[2][3], sum=0;
  //user to enter the matrix
  printf("Enter a 2*3 matrix :\n");

  for(int i=0;i<2;i++)
    {
	 for(int j=0;j<3;j++)
	   {
	     printf("matrix arr[%d][%d]: ",i,j);
		 scanf("%d",&arr[i][j]);
	   }
	}
	//print matrix and calculate the sum
	printf("Print a matrix\n");
	for(int i=0;i<2;i++)
	  {
	    for(int j=0;j<3;j++)
		 {
		  printf("%d\t",arr[i][j]);
		  sum=sum+arr[i][j];
		 }
		 printf("\n");
	  }
	  printf("sum is %d\n",sum);

	 return 0;
	 }

