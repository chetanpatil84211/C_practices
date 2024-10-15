// fibonacci number 

#include<stdio.h>
int main()
{
  int n, a=0,b=1,c;//0,1,1,2,3,5,8,13

  printf("Enter a limit :  \n");
  scanf("%d",&n);
 
  for(int i=0;i<n;i++)
  {
    printf("%d\t",a);
	c=a+b;
	a=b;
	b=c;
  }

  return 0;

  }
    
