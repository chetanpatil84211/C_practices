#include<stdio.h>

int clearBit(int num,int position);

int main()
{
    int num,position;
    printf("Enter a number and position : ");
    scanf("%d%d",&num,&position);
    
    int result=clearBit(num,position);

    printf("Result is : %d\n",result);
    
    return 0;
    
}
   int clearBit(int num,int position)
 {
     int mask=~(1<<position);
     return (num & mask);
     
 }
