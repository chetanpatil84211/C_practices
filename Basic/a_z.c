//Print Alphabets From A to Z Using Loop

#include<stdio.h>
int main()
{
  printf("Alphabets are : \n");

  // ASCII value of A=65 and Z=90

  for(int i=65;i<=90;i++)
  //for (char i = 'A'; i <= 'Z'; i++)
  {
   printf("%c\t",i);

   }
    
	printf("\n");

	printf("alphabets from (a-z) are : \n");

	// ASCII value of a=97 and z=122

	//for(int i=97;i<=122;i++)
    for ( char i = 'a'; i <= 'z'; i++)
	 {
	  printf("%c\t",i);
	  }

  

	return 0;

}
