#include<stdio.h>

void checkevenodd(int N)
{
  int r=N%2;
  
   if(r==0)
    {
	 printf("Even\n");
	}
	else
	{
	 printf("Odd\n");
	}
}

int main()
{
   int N;
   printf("Enter a number : ");
   scanf("%d",&N);

    checkevenodd(N);
 
return 0;
}
