#include<stdio.h>
int main()
{
  int num;
  printf("Enter a num : \n");
  scanf("%d",&num);

  for(int i=1;i<=num;i++)
    {
	 for(int j=1;j<=2*num-1;j=j+2)
	  {
	   printf("%d ",j);
	   }
	   printf("\n");
	 }

	 return 0;
	 }
