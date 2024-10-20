// Armstrong Number Program

#include<stdio.h>
int main()
{
    int num;
    printf("Enter a number: \n");
    scanf("%d",&num);
    printf("number is :%d\n",num);
    int orignal=num,sum=0,reverse;
   
    while(num>0)
    {
        reverse=num%10;
        sum=sum+reverse*reverse*reverse;
        num=num/10;
        
    }

    printf("Reverse is : %d\n",reverse);
    printf("Sum is : %d\n",sum);
    
	if(sum==orignal)
    {
    printf("Number a Armstrom\n");
    }
    else
    {
     printf("Number is not Armstron\n");   
    
	}
    

	return 0;
}
