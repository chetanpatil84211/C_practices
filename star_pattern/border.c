#include<stdio.h>
int main()
{
    int rows,coloms;
	printf("Enter a rows and coloms : \n");
	scanf("%d%d",&rows,&coloms);
    for(int i=1;i<=rows;i++)
      {
          for(int j=1;j<=coloms;j++)
           {
              if(i==1||i==rows||j==1||j==coloms)
               printf("* ");
               else
               printf("  ");
           }
           printf("\n");
      }
      return 0;
      
}// 5 5

/*

* * * * *
*       *
*       *
*       *
* * * * *

*/
