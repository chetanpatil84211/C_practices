//sum of first N natural number

#include<stdio.h>
int main()
{
    int num,sum=0;
    printf("Enter a number : ");
    scanf("%d",&num);
    
    for(int i=1;i<=num;i++)
     {
         sum=sum+i;
     }
     
     printf("Sum is :%d\n",sum);
     printf("----------------------------------\n");
     
     int j=1,result=0;
     
     do{
         result=result+j;
         j++;
     }while(j<=num);
     
     printf("result of sum : %d\n",result);
     
     return 0;
}
/*
Enter a number : 10
Sum is :55
----------------------------------
result of sum : 55
*/
