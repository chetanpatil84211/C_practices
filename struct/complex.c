#include<stdio.h>
typedef struct complexnumber{
           int real;
		   int img;
		   }complex;

complex add(complex x,complex y);

int main()
{
   complex a,b,sum;

   a.real=4;
   a.img=5;

   b.real=2;
   b.img=3;

   printf("a=%d+%di\n",a.real,a.img);
   printf("b=%d+%di\n",b.real,b.img);

   sum=add(a,b);

   printf("sum=%d+%di\n",sum.real,sum.img);

   return 0;
   }

  complex add(complex x,complex y)
  {
    complex add;

	add.real=x.real+y.real;
	add.img=x.img+y.img;

	return(add);
}

/*
a=4+5i
b=2+3i
sum=6+8i
*/





