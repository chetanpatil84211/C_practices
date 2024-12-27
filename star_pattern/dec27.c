#include<stdio.h>
int main()
{  
    int row;
    
     printf("Enter a row: ");
     scanf("%d",&row);
    for(int i=0;i<row;i++)
      {
           for(int j=0;j<row-i;j++)
             {
                 printf(" ");
             }
             for(int k=0;k<row;k++)
              {
                 printf("%d",k+1);
              }
              printf("\n");
      }
      
      return 0;
}
/*
Enter a row: 7
       1234567
      1234567
     1234567
    1234567
   1234567
  1234567
 1234567
*/
