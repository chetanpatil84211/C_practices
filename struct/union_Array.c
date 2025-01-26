//Array of unnion

#include<stdio.h>
 
   union num{
               int i;
			   long int l;
			   float f;
			   double d;
			  };

int main(void)
{
   union num arr[10];
   
   arr[0].i=12;
   arr[1].l=300000;
   arr[2].f=11.12;
   arr[3].d=23.44;

   printf("%d\t",arr[0].i);
   printf("%ld\t",arr[1].l);
   printf("%f\t",arr[2].f);
   printf("%f\n",arr[3].d);

   printf("size is =%ld\n",sizeof(arr));
   return 0;
}
/*
  12	300000	11.120000	23.440000
  size is =80

 */


