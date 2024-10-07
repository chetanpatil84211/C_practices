#include<stdio.h>
struct date{
             unsigned int d;
			 unsigned int m;
			 unsigned int y;
			 };
int main()
{
   printf("Size of struct :%lu\n",sizeof(struct date));

   struct date dt={7,10,2024};

   printf("Date is %d/%d/%d\n",dt.d,dt.m,dt.y);



return 0;
}
