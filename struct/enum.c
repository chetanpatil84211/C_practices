#include<stdio.h>

enum year{Jan,Feb,Mar,Apr,May,Jun,July,Aug,Sep,Oct,Nov,Dec};

int main()
{
  int i;
  for(i=Jan; i<=Dec; i++)
      printf("%d\t",i);

	  return 0;

  }

/*enum week{mon,tue,wed,thur,fri,sat,sun};

int main()
{
   enum week day;
   day=wed;
   printf("%d\n",day);//2

   return 0;

   }*/

/*enum xenum{c,cpp,java};
int main()
{
   enum xenum var;
   
   printf("size is var %ld\n",sizeof(var));//4



return 0;
}*/



/*Enumeration (or enum) is a user 
defined data type in C. It is mainly 
used to assign names to integral constants, 
the names make a program easy to read and 
maintain*/
