#include<stdio.h>
int sumdigit(int n);

int main()
{
  int n,s;
  printf("Enter a number : ");
  scanf("%d",&n);
  s=sumdigit(n);
  printf("Sum of digit is :%d\n",s);
  
  return 0;
  }

 int sumdigit(int n)
  {
    if(n==0)
	  return 0;

	 return n%10+sumdigit(n/10);
  }
