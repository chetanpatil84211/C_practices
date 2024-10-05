#include<stdio.h>
#include<string.h>
int main()
{
   char dest[30]="This is an";
   char src[30]=" example";
   
   printf("dest Before : %s\n",dest);
   printf("src is      : %s\n",src);
   
   printf("Using strcat()  :\n");
   strcat(dest,src);

   printf("dest After : %s\n",dest);

   /*The strcat() function in C is used for string concatenation. 
   It will append a copy of the source string to the end of the 
   destination string.
   */
  
   printf("Using strlen() :\n");

   printf("dest length is %ld\n",strlen(dest));
   printf("src length is %d\n",(int)strlen(src));

   /*The strlen() function calculates the length 
   of a given string. It doesn’t count the null 
   character ‘\0’
   */
     
	 printf("Using strcpy() : \n");

	 char str[20]="Patil";
	 char str_in[20]="Chetan";

     printf("str is %s\n",str);
	 printf("str_in %s\n",str_in);

	 strcpy(str,str_in);

	 printf("After strcpy() :%s\n",str);
	 printf("str_in %s\n",str_in);

  /*
  The strcpy() is a standard library 
  function in C and is used to copy one 
  string to another.
  */
         return 0;
   }
