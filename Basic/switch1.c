#include<stdio.h>
int main()
{
  int choice;
  printf("Enter a choice:  ");
  scanf("%d",&choice);

   switch(choice)
    {
	  case 1:printf("First\n");
	         break;
	  case 2:printf("Second\n");
	         break;
	  case 3:printf("Third\n");
	         break;
       default:printf("Wrong choice\n");
	 }

     return 0;
}
