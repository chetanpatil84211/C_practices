#include<stdio.h>
int isPrime(int n);

int main()
{
   int n;
   printf("Enter a  natural number : ");
   scanf("%d",&n);

   printf("Is %d is prime?\n",n);

   if(isPrime(n))
     {
	   printf("Yes\n");
	 }
	else
	 {
	   printf("No\n");
	 }


  return 0;
 }

 int isPrime(int n)
  {
    for(int i=2;i<n;i++)
	  {
	    if(n%i==0)
		  {
		    return 0;
		  }
	   }

	return 1;
  }
