#include<stdio.h>
int main()
 {  
     int up_table;
   printf("Enter table Upto : ");
   scanf("%d",&up_table);
     for(int i=1;i<=10;i++)
      {
          for(int j=up_table;j<=up_table;j++)
           {
              printf("%d ",j*i);
           }
           printf("\n");
      }
     
     printf("\n");
     return 0;
 }
