#include<stdio.h>
void checkevenodd(int N)
{
   if(N&1)
    {
	 printf("Odd\n");
	}
   else
    {
	 printf("Even\n");
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
