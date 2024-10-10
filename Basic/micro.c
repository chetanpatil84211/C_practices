#include<stdio.h>

/*//micro definition
#define LIMIT 5

int main()
{
  for(int i=0;i<LIMIT;i++)
   {
    printf("%d \n",i);
	}

	return 0;
	}

There is no semi-colon (;) a
t the end of the macro definition. 
Macro definitions do not need a 
semi-colon to end.
*/

//macro with parameter
#define AREA(l,b) (l*b)

int main()
{
  int l1=10,l2=5,area;
  
  area = AREA(l1,l2);

  printf("Area of rectangle is : %d\n",area);

  return 0;

  }

















