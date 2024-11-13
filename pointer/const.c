#include<stdio.h>
int main()
{
  const  int a=10;
  printf("a=%d\n",a);
  
  int *ptr=&a;
    
    *ptr=20;
  printf("a=%d\n",a);
  printf("*ptr=%d\n",*ptr);   
    
    return 0;
}

/*
const.c:7:12: warning: initialization discards ‘const’ qualifier from pointer target type [-Wdiscarded-qualifiers]
    7 |   int *ptr=&a;
      |            ^
*/
