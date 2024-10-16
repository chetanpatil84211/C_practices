#include<stdio.h>
int main()
{ 
  int arr[3][3],sumRow,sumCol,all_add=0;
  printf("Enter a 3*3 matrix\n");
 //input trough the use
   for(int i=0;i<3;i++)
   {
    for(int j=0;j<3;j++)
	 {
	  printf("arr[%d][%d] : ",i,j);
	  scanf("%d",&arr[i][j]);
	  }
	 }
	 //print the matrix
	
    for(int i=0;i<3;i++)
	 {
	   for(int j=0;j<3;j++)
	   {
	    printf("%d\t",arr[i][j]);
	   }
	   printf("\n");
	 }
	 //sum of matrix row and column individual

	 for(int i=0;i<3;i++)
	  {
	    sumRow=0,sumCol=0;
          for(int j=0;j<3;j++)
		   {
		     sumRow=sumRow+arr[i][j];
			 sumCol=sumCol+arr[j][i];
			 all_add=all_add+arr[i][j];
			}
			printf("sum row :%d, sum column is :%d\n",sumRow,sumCol);
		}
           printf("All elements addition :%d",all_add);
		return 0;
 }

 







