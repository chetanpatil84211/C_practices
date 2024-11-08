//Enter a n : 5
//2	5	10	17	26


#include<stdio.h>
int main()
{
    int n;
    printf("Enter a n : ");
    scanf("%d",&n);
    
    for(int i=1;i<=n;i++)
     {
         printf("%d\t",i*i+1);
     }
     
    printf("\n");

     return 0;
}
