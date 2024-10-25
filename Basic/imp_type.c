#include<stdio.h>

int main()
{
   int x=10;
   char y='a';

   // y implicite converted to int 

   x=x+y;

   // x is implicate converted to float

   float z=x+1.0;

   printf("x = %d, z=%f\n",x,z);


   return 0;

   }
