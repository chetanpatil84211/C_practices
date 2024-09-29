#include<stdio.h>
int main()
{
   int num;
   printf("Enter a row : \n");
   scanf("%d",&num);
   int a=num;
   for(int i=1;i<=num;i++)
     {
	  for(int j=1;j<=a;j++)
	    {
		 printf("%d ",j);
		}
	      a--;
	printf("\n");
     } 
   printf("a is %d\n",a);
return 0;
}
