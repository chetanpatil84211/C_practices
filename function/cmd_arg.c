#include<stdio.h>
int main(int argc,char *argv[])
{
  printf("You enter %d argument : \n",argc);

  for(int i=0;i<argc;i++)
    {
	  printf("%s\n",argv[i]);
	 }

	 return 0;
	 }

	 /*
input command line=./f.out math phy che bio

output=
You enter 5 argument :
./f.out
math
phy
che
bio


1)argv[0] holds the name of the program.
2)argv[1] points to the first command line 
argument and argv[argc-1] points to the last argument.


*/

