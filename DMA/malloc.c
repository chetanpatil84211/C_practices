#include<stdio.h>
#include<stdlib.h>

int main()
{
  int n,i,*ptr;
  printf("Enter total number of values:\n");
  scanf("%d",&n);

  ptr=(int *)malloc(n*sizeof(int));

  printf("Enter the values : \n");

  for(i=0;i<n;i++)
   {
     scanf("%d",(ptr+i));
    }

	printf("The enter values are:\n");

	for(i=0;i<n;i++)
	 {
	   printf("%d\t",*(ptr+i));
	 }

	 free(ptr);

	 return 0;

  }
