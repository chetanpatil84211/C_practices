#include<stdio.h>

int main()
 {
   int age;
  
   printf("Enter a Age : ");
   scanf("%d",&age);


   if(age>18)
    {
	 printf("Adult\n");
	 printf("They can Vote \n");
	 printf("They can Drive\n");
	}
  else
    {
	printf("Not a Adult\n");
	}


	return 0;

	}
