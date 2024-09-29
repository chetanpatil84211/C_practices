#include<stdio.h>
int  main()
{  int row,a;
    printf("Enter a row : \n");
	scanf("%d",&row);
	a=row;
  for(int i=1;i<=row;i++)
     {
	   for(int j=1;j<=a;j++)
	     {
		   printf("# ");
		 }
		 a--;
		printf("\n");
	 }

		   

return 0;
}
