#include<stdio.h>
 int main()
 {
     int n;
     printf("Enter a n :   ");
     scanf("%d",&n);
      int a=n;
     for(int i=1;i<=n;i++)
       {
         for(int j=i;j<=a;j++)
          { 
             printf("%d ",j);
          }
         
          for(int k=1;k<i;k++)
            { 
               
              printf("%d ",k);
            }
       
          printf("\n");
       }
       
       return 0;
 
 }
/*
Enter a n :   7
1 2 3 4 5 6 7
2 3 4 5 6 7 1
3 4 5 6 7 1 2
4 5 6 7 1 2 3
5 6 7 1 2 3 4
6 7 1 2 3 4 5
7 1 2 3 4 5 6
*/
