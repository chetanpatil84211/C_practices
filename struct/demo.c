#include<stdio.h>

struct student{
               int rollno;
			   char name[20];
			   float marks;
			  };


int main()
 {
    struct student s1;

	struct student s2={1,"abc",88.3};

	struct student s3={2,"pqr"};

printf("s1 = roll:%d, name:%s, marks:%f\n",s1.rollno,s1.name,s1.marks);
printf("s2 = roll:%d, name:%s, marks:%f\n",s2.rollno,s2.name,s2.marks);
printf("s3 = roll:%d, name:%s, marks:%f\n",s3.rollno,s3.name,s3.marks); 

struct student *ptr=&s2;
//pointer variable

printf("s2 using ptr=roll:%d,  name:%s, marks:%f\n",ptr->rollno,ptr->name,ptr->marks);


printf("sizeof(s1)=%ld\n",sizeof(s1));
printf("Sizeof(s2)=%ld\n",sizeof(s2));
printf("struct size=%ld\n",sizeof(struct student));
  
  return 0;
  }

/*
s1 = roll:1, name:, marks:-12362546266876440985223561216.000000
s2 = roll:1, name:abc, marks:88.300003
s3 = roll:2, name:pqr, marks:0.000000
s2 using ptr=roll:1,  name:abc, marks:88.300003
sizeof(s1)=28
Sizeof(s2)=28
struct size=28
*/












