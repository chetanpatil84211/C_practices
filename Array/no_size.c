#include<stdio.h>
void fun(int *arr);
int main()
{
 int arr[]={1,2,3,4,5,6,7,8};
 fun(arr);

return 0;
 }
 void fun(int *arr)//create a pointer 8 byte=8/4(arr[0])=2 print 1 2
  {
    int i;
	unsigned int  n=sizeof(arr)/sizeof(arr[0]);

	for(i=0;i<n;i++)
	   printf("%d ",arr[i]);
}
/*For the 64-bit processor, the size of the pointer is 8 bytes a
nd the size of the integer is 4 bytes.
*/

