#include <stdio.h>

int main() 
{
    int n;//5
    printf("Enter a num only odd : ");
    scanf("%d",&n);
    for(int i=1;i<=n;i++)
     {   
         for(int j=1;j<=n;j++)
          { 
             if(i==n/2+1||j==n/2+1)
              printf("*"); 
             else
              printf("#");//space only plus sign
          }
          printf("\n");
     }

    return 0;
}
/*   ##*##
     ##*##
     *****
     ##*##
     ##*##

*/
