#include<stdio.h>

int main()
{
    int num;
    printf("Enter a number : ");
    scanf("%d",&num);
    
    for(int i=0;i<=num;i++)
     {
         if(i%2 == 0)
          {
             printf("%d\t",i);
          }
          
          
          
     }

	 return 0;
	 }
