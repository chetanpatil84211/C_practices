#include<stdio.h>
int main()
{
  int a,b,H;

  printf("Enter a Both Number :   ");
  scanf("%d%d",&a,&b);

  for(H=(a<b?a:b);H>=1;H--)
     {

	   if(a%H==0 && b%H==0)
	     {
		   break;
		 }
	 }

  printf("HCF is %d\n",H);


 return 0;
 }
