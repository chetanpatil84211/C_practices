#include<stdio.h>
void func(int arr[]);
int main()
{
  /* int i=0,j=0,arr[6]={4,2,6,0,5,10};

    while(arr[i])
	  {
	    j+=arr[i];
		i++;
	  }

  printf("j=%d\n",j);
  //j=12;
  */

 /* int arr[4]={2,4,8,16},i=3,j=0;

    while(i)
	  {
	    j+=arr[i];
		i--;
	  }

	  printf("j=%d\n",j);//j=28
*/
  
 int arr[5]={5,10,15,20,25};
 func(arr);
 
  return 0;
 }

 void func(int arr[])
  {
   int i=5,sum=0;
   while(i>2)
            sum=sum+arr[--i];
    printf("sum=%d\n",sum);//sum=60
  }
