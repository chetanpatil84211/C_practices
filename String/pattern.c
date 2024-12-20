#include<stdio.h>
#include<string.h>
int findPattern(char str[],char p[]);
int main()
 {
   char str[]="aabbabaabaaabab";
   char p[]="aaa";
   
   printf("index is :%d\n",findPattern(str,p));

   return 0;
 }
  
  int findPattern(char str[],char p[])
   {
	    int i,j,k;
        for( i=0;i<=strlen(str)-strlen(p);i++)
	    {
	      for(j=i,k=0;p[k];j++,k++)
		   {
		       if(p[k] !=str[j])
		        break;
		     }
		  if(k==3)
		  return (i);
		     
	
         }
      return (-1);
 }
