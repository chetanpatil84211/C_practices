#include<stdio.h>
int main()
{
 int num;
 printf("Enter a number : ");
 scanf("%d",&num);

 for(int i=num;i>=2;i=i-2)
    {
	 printf("%d\t",i);
	}

	printf("\n");

	return 0;

	}
