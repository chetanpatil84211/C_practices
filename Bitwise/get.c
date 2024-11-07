#include<stdio.h>
void  get_bit(int n,int pos);

int main()
{
    int n,posi;
    printf("Enter a number : ");
    scanf("%d",&n);
    printf("Enter position : ");
    scanf("%d",&posi);
    get_bit(n,posi);
    
    
    return 0;
}

void  get_bit(int n,int pos)
 {
     int num=1<<pos;
     if(n&num)
      printf("Bit is 1\n");
      else
       printf("Bit is 0\n");
 }
