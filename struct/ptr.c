#include<stdio.h>
struct student{
                int rollno;
				char name[20];
				float marks;
			  };
int main()
{
   struct student s1={1,"sham",81.80};

   struct student *ptr=&s1;

   printf("%d  %s  %f\n",ptr->rollno,ptr->name,ptr->marks);

 return 0;
 }
