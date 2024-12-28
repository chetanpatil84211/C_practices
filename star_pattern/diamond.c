#include<stdio.h>
int main()
{    int k,j,n;
        
     printf("Enter a row : ");
     scanf("%d",&n);
    for(int i=1;i<=n;i++)
      {
          for( j=1;j<=n-i;j++)
           {
               printf("  ");
           }
           
           for(k=1;k<=2*i-1;k++)
           {
               printf("%d ",k);
           }
           
           printf("\n");
          // printf("k=%d\n",k);
           k=k-1;
           if(k==n*2-1)
            {  for(int q=1;q<=k;q++){
               
                  for(int l=1;l<=q;l++)
                   {
                     printf("  ");  
                   }
                    for(int p=1;p<=-1*(2*q-k);p++)
                  {
                      printf("%d ",p);
                  }
                   printf("\n");
                  
            }
            }
           
          
           
      }
      
      return 0;
}
/*
Enter a row : 5
        1
      1 2 3
    1 2 3 4 5
  1 2 3 4 5 6 7
1 2 3 4 5 6 7 8 9
  1 2 3 4 5 6 7
    1 2 3 4 5
      1 2 3
        1
*/
