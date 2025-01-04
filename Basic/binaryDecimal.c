#include<stdio.h>
int binaryDecimal(int num);

int main()
{
    int num;
    printf("Enter a Binary  number : ");
    scanf("%i",&num);

    printf("Decimal number is :%d\n",binaryDecimal(num));
    return 0;
}
int  binaryDecimal(int num)
{
    int weight=1,rem,decimal=0;
    while(num>0)
    {
        rem=num%10;
        decimal+=rem*weight;
        weight*=2;
        num=num/10;

    }
    return decimal;
}
