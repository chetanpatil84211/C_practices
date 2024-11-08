// print first N odd number 

#include<stdio.h>
int main()
{
    int n;
    printf("enter a number : ");
    scanf("%d",&n);
    n=n*2;
    int i=1;
    do{
        if(i%2 !=0) // Check if i is odd
         {
             printf("%d\t",i);
         }
         i++;
    }while(i<=n);
    

   printf("\n");

    return 0;
}
