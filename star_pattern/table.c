#include<stdio.h>
int main()
{
  int n;
  printf("Enter a number(1 to n print) : \n");
  scanf("%d",&n);

  for(int i=1;i<=10;i++)
   {
    for(int j=1;j<=n;j++)
	 {
	   printf("%d ",j*i);
	  }
	 printf("\n");
	}

	return 0;
	}
