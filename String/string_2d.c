#include<stdio.h>
#define N 5
#define LEN 10
int main()
{
      char arr[N][LEN]={ 
	                     "white",
						 "red",
						 "green",
						 "yellow",
						 "blue",
						 };
			int i;

			for(i=0;i<N;i++)
			  {
			    printf("string = %s\t",arr[i]);
				printf("Address of string= %p\n",arr[i]);
			   }

                printf("\n");
  return 0;
 }
 /*
string = white	Address of string= 0x7ffd3b198780
string = red	Address of string= 0x7ffd3b19878a
string = green	Address of string= 0x7ffd3b198794
string = yellow	Address of string= 0x7ffd3b19879e
string = blue	Address of string= 0x7ffd3b1987a8
*/
