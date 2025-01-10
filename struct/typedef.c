#include<stdio.h>
#include<string.h>

typedef struct Students{
                 char name[50];
				 char branch[30];
				 int ID_no;
				}stu;

	 int main()
	 {
	    stu s;
		strcpy(s.name,"Sham");
		strcpy(s.branch,"CSE");
		s.ID_no=100;

		printf("%s\n",s.name);
		printf("%s\n",s.branch);
		printf("%d\n",s.ID_no);

		return 0;
	}
