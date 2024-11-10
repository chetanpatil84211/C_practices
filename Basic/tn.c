#include<stdio.h>
int main()
{
    int n;
    printf("Enter a n : ");
    scanf("%d",&n);
    
    for(int i=1;i<=2*n-1;i++)
     {  
         if(i%2 !=0)
         {
         printf("%d\t",i);
         }
     }
     
     return 0;
}
