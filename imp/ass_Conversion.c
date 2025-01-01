#include<stdio.h>
  
  int main(void)
   {
    char c1,c2;
	int i1,i2;
	float f1,f2;
	
	c1='H';
	i1=80.55;//float  converted to int ,only 80 assigned to i1

	printf("i1=%d\n",i1);
   
    f1=12.6;
	c2=i1;//int converted to char

	printf("c2=%c\n",c2);
     
	 i2=f1;//float converted to int

	 printf("i2=%d\n",i2);

    return 0;
  }
 /*
i1=80
c2=P
i2=12
*/
