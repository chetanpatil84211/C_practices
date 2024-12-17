#include<stdio.h>
union Sti{
           int nu;
		   char m;
		   };

	int main()
	{
	 union Sti s;
	 printf("%ld\n",sizeof(s));

	return 0;
 }
/*
Explanation: Since the size of a union is the 
size of its maximum data type, here int is the 
largest data type. Hence the size of the union is 4.
*/
