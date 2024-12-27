#include<stdio.h>
int main()
{    
    int row;
    printf("Enter a rows : ");
    scanf("%d",&row);
    for(int i=0;i<row;i++)
     {
         for(int j=0;j<row;j++)
          
           {
                if(i==j||i==row-1||j==0)
                   printf("*"); 
                else
                   printf(" ");
                    
           }
           
           
           printf("\n");
     }
     
     
     return 0;
     
}
/*
Enter a rows : 7
*
**
* *
*  *
*   *
*    *
*******
*/




