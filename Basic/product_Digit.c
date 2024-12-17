#include<stdio.h>

void product_number(int n);

int main()
{
  int number;
  printf("Enter a number : ");
  scanf("%d",&number);
  
  product_number(number);

  return 0;
  }

  void product_number(int n)
   {
      int product=1,rem;
     if(n==0)
          {
		   product=0;
		  }
	  
	  else
	  {
         while(n>0)
	     {
	       rem=n%10;
		   product=product*rem;
		   n=n/10;

	     } 
       }
	 printf("Product of number is :%d\n",product);
	}
	   
