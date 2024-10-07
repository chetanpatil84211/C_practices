#include<stdio.h>
struct date {
            unsigned int d : 5;
      
			unsigned int m : 4;

            unsigned int y ;
 			  };
  int main()
  {
    printf("size of struct :%lu\n",sizeof(struct date));

	struct date dt={7,10,2024};

	printf("date is %d/%d/%d\n",dt.d,dt.m,dt.y);


	return 0;

	}
	/*
	size of struct :8
    date is 7/10/2024
  
  In C, we can specify the size (in bits) of the structure 
  and union members. The idea of bit-field is to use memory 
  efficiently when we know that the value of a field or group 
  of fields will never exceed a limit or is within a small 
  range. C Bit fields are used when the storage of our program 
  is limited.
  
  */

