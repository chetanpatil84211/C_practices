#include<stdio.h>
int main()
{
  int arr[5],even=0,odd=0;
  for(int i=0;i<5;i++)
    {
	  printf("enter arr[%d]= ",i);
	  scanf("%d",&arr[i]);

	  if(arr[i]%2==0)
	    even++;
		else
		odd++;
	 }



	 printf("even is %d\n",even);
	 printf("odd is %d\n",odd);

	 return 0;
  }
