#include<stdio.h>

int isprime(int n);
int nextprime(int n);
void printprime(int a,int b);

int main()
{
  printprime(10,90);
  int next=nextprime(90);
  printf("Next prime is :%d\n",next);

  return 0;
 }

   int isprime(int n)
    {
    int i;
	  for(i=2;i<n;i++)
	      if(n%i==0)
		    return 0;
	      return 1;
    }

    void printprime(int a,int b)
    { 
	  int x;
	    for(x=a;x<=b;x++)
		   if(isprime(x))
		     printf("%d\t",x);
   }
  
    int nextprime(int n)
    {
	  while(!isprime(++n));
	   return n;
	 }
