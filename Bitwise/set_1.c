#include<stdio.h>
int setBit(int num,int position);

int main()
{
    int num,position;
    printf("Enter number and position : ");
    scanf("%d%d",&num,&position);
    int result=setBit(num,position);
    printf("result is : %d\n",result);
    return 0;
}

int setBit(int num,int position)
   {
       return (num | (1<<position)) ;
   }
