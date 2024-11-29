#include<stdio.h>

int nSum(int n);

int main()
{
  int n=10;
  
  int sum=nSum(n);
  printf("Sum of number is :%d\n",sum);
  
  return 0;
  }
 
 int nSum(int n)
  {
    if(n==0)
	 return 0;

   int result=n+nSum(n-1);
  
   return result;
  }
