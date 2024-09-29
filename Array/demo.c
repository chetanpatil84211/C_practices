#include<stdio.h>
int main()
{
  char arr[]={'m','o','r','n','i','n','g','\0'};
  int i=0,count=0;
  while(arr[i])
    {
	  printf("%c",arr[i++]);
	  count++;

	}
	printf("\ncount is %d\n",count);

	return 0;
	}
