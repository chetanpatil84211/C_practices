#include<stdio.h>
int main()
{
  struct result{
                  int marks;
				  char grade;
				};

		          struct result A1,B1;
				  A1.marks=80;
				  A1.grade='A';

			       B1=A1;

		printf("Marks=%d\t",B1.marks);
		printf("Grade=%c\n",B1.grade);

		return 0;
    }

//Marks=80	Grade=A
