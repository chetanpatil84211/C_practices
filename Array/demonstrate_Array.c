#include<stdio.h>
int main()
{
   int arr[5]={1,[3]=66,[4]=67};
 
   for(int i=0;i<5;i++)
     {
	    printf("arr[%d]=%d\n",i,arr[i]);
	  }

	  return 0;
}
//outut 1 0 0 66 67   
