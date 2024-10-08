#include<stdio.h>
#pragma pack(1)
struct abc{
            char a;
			int b;
			char c;
			};
int main()
{
   struct abc s;
   printf("Size is %ld\n",sizeof(s));

return 0;
}

//size 12
//using structure paking size 6
