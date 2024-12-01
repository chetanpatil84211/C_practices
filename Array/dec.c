#include<stdio.h>

int main()
{ 
 int i,arr[5]={10,20,30,40,50},*p;
   
   for(i=0;i<5;i++)
     {
	  printf("%d\t",*arr);
	    //arr++;
	  }


   return 0;
  }
 // output 10	10	10	10	10
  /*
  What the code is trying to do:
Array Declaration: An integer array arr with values {10, 20, 30, 40, 50} is declared.
Pointer arr used: The name of the array arr in C acts as a pointer to its first element.
Pointer Dereferencing (*arr): Inside the loop, it attempts to print the value pointed to by arr, 
which will initially be the first element (10).
Pointer Increment: The expression (arr++) is trying to increment the pointer arr, but this has unintended side effects.

Issue with (arr++):
The arr is the name of the array, and its base address cannot be modified directly. 
The array name arr points to the first element of the array and is a constant pointer 
(it cannot be incremented or reassigned).
Trying to increment arr (arr++) would generate a compilation error because you cannot change the address that arr holds.
*/
