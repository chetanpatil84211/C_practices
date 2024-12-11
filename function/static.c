#include<stdio.h>
void func(void);

int main(void)
{
  func();
  func();
  func();

   return 0;
 }

 void func(void)
 {
   int a=10;
   static int b=10;
   printf("a=%d , b=%d\n",a,b);
   a++;
   b++;
 }
/*

a=10 , b=10
a=10 , b=11
a=10 , b=12
*/
