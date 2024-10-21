#include<stdio.h>
int sum(int x,int y);

int main()
{   
   
    int (*ptr) (int ,int )=&sum;
     
    int result=(*ptr)(10,20);
    
    printf("Result is %d\n",result);
    
    return 0;
}

   int sum(int x,int y)
  {
    return x+y;
  }
