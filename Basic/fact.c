#include<stdio.h>

int main()
{
    
	int n,fact=1;
    printf("Enter a Factorial number  : ");
    scanf("%d",&n);
    
for(int i=1;i<=n;i++)
{
    fact=fact*i;
}
    printf("Factorial is %d\n",fact);
    
    return 0;
}
