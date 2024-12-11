#include<stdio.h>
struct student{
                  char name[20];
				  int rollno;
				  int marks;
				 };
int main()
{
    struct student stu={"Harshal",22,77};
	struct student *ptr=&stu;
	printf("Name - %s\t",ptr->name);
	printf("rollno -%d\t",ptr->rollno);
	printf("marks - %d\t",ptr->marks);

  printf("\n");
   printf("address of : %p\n",&stu);
   printf("address of ptr:%p\n",ptr);

  return 0;
 }
