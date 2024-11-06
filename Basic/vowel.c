//C program to check if a character
// is a vowel or consonant

#include<stdio.h>
int main()
{
  char ch;
   printf("Enter a character : ");
   scanf("%c",&ch);

  if(ch=='a'||ch=='A'||ch=='e'||ch=='E'||ch=='i'||ch=='I'||ch=='o'||ch=='O'||ch=='u'||ch=='U')
     {
	   printf("Character %c is Vowel\n",ch);
	 }
  else
     {
	   printf("Character %c is Consonant\n",ch);
	  }


	  return 0;

}
