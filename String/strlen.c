#include<stdio.h>
#include<string.h>
int main()
{ 
 //declare and intialize string
  char str[]="sunbeam";
 
 //print string
 printf("string is =%s\n",str);
  
  //display length of string
  printf("length is %ld\n",strlen(str));

  //read string from user

 //declaring string
  char instr[20];
 
  printf("Enter a string : ");
  //read a  string
  scanf("%s",instr);

  //print string
  printf("string is =%s",instr);
  


  return 0;

  }
