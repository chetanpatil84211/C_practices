#include<stdio.h>
int main()
{  
   int n;
   printf("Enter a row: ");
   scanf("%d",&n);
   
   /* for(int i=1;i<=n;i++)
      {
          for(int j=1;j<=i;j++)
            {
               printf("*");
            }
            printf("\n");
      }*/
      int j=1;
      while(j<=n)
       {   int i=1;
           while(i<=j)
            {
                printf("*");
                i++;
            }
            printf("\n");
           
           j++;
       }
      
      return 0;
}
