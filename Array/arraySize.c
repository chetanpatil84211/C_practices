#include<stdio.h>
int main()
{
    int arr[]={1,2,3,4,5,6};
    printf("%u\n",&arr);
    printf("f=%u\n",&arr+1);
    
    printf("v=%u\n",*(&arr+1));
    printf("base=%u\n",arr);
    
    int size=*(&arr+1)-arr;
    
    printf("size%d\n",size);
    
    
    return 0;
}

/*
 
3381127648
f=3381127672
v=3381127672
base=3381127648
size6
*/
