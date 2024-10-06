#include<stdio.h>
int main()
{
  int arr[]={1,2,3,4,5,6,7,8,9,10};

  int *ptr=arr;

   int n=sizeof(arr);

   printf("size is %d\n",n);

   int size_e=(sizeof(arr)/sizeof(arr[0]));

   printf("array element : %d\n",size_e);
   
  printf("Print array element using ptr:\n");

  for(int i=0;i<size_e;i++)
    {
	 printf("%d\t",(*ptr));

	 ptr++;

	 }





   return 0;
   }
