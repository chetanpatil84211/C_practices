#include<stdio.h>
int main()
{  
    int n;
    printf("Enter a row  :  ");
	scanf("%d",&n);
    int a=n;
    for(int i=1;i<=n;i++)
    {
      for(int j=1;j<=a-1;j++)
        {
		 printf("# ");
		 }
        for(int k=1;k<=i;k++)
        {
            printf("* ");
        }
    
          a--;
        printf("\n");
    }

   return 0;
 }

