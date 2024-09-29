#include<stdio.h>
int getMax(int *arr,int size)
 {
  int max=arr[0];
  for(int i=1;i<size;i++)
   {
     if(max<arr[i])
	  {
	   max=arr[i];
	  }

	}
	return max;
 }
 int min(int *ptr,int size)
 {  int min=ptr[0];
   for(int i=1;i<size;i++)
    {
	  if(ptr[i]<min)
	   {
	    min=ptr[i];
		}
	}
	return min;
	}
int main()
{
  
 int arr[5]={11,33,55,77,99};
 printf("largest Number in array : %d\n",getMax(arr,5));

 printf("minimum Number in arr : %d\n",min(arr,5));

 return 0;
 }
 /*
 [Advantages of Array in C]
The following are the main advantages of an array:

Random and fast access of elements using the array index.
Use of fewer lines of code as it creates a single array of multiple elements.
Traversal through the array becomes easy using a single loop.
Sorting becomes easy as it can be accomplished by writing fewer lines of code.

[Disadvantages of Array in C]
Allows a fixed number of elements to be entered which is 
decided at the time of declaration. Unlike a linked list, 
an array in C is not dynamic.
Insertion and deletion of elements can be costly since the 
elements are needed to be rearranged after insertion and deletion.
*/
















