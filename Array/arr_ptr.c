#include<stdio.h>
int main()
{
  int arr[5]={10,20,30,40,50};
  int *ptr=&arr[0];	

  printf("address arr name %p\n address 1 element %p\n",arr,&arr[0]);

  
  printf("printf array using ptr\n");

  for(int i=0;i<5;i++)
   {
     printf("%d\t",*ptr++);
	}

	return 0;

	}
