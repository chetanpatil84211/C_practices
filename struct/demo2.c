#include<stdio.h>
#pragma pack(1)

struct test {
                int a;   
				char b;  
				short c;
				int d;
				short e;
				char f;
				int g;
			};

int main()
{
  
   printf("sizof(struct test) : %ld\n",sizeof(struct test));

  return 0;
  }

  //sizof(struct test) : 20
  //using #pragma pack(1) : 18
