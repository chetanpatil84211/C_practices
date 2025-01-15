#include<stdio.h>
#include<math.h>


int main(void)
{
    int sum=0,power,var;
    printf("Enter a power to  : ");
    scanf("%d",&power);
    printf("Number is : ");
    scanf("%d",&var);
    
    for(int i=0;i<=power;i++)
    {
        sum=sum+pow(var,i);
    }
    
    
    
    printf("sum is :%d\n",sum);
    return 0;
    
}
