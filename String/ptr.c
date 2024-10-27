#include<stdio.h>
char *strrev(char *s);
char *strupr(char *s);
char *strlwr(char *s);

int main()
{
   char str[]="sunbeam";

   printf("str before reverse : %s\n",str);

   strrev(str);
  
   printf("str after reverse : %s\n",str);

   printf("Uppercase string : %s\n",strupr(str));

   printf("Lowercase string : %s\n",strlwr(str));  

   return 0;
   }

  char *strrev(char *s)
  {
    int i=0,j=0;

	for( ; s[j] !='\0';j++);
	j--;

	for( ;i<j;i++,j--)
	 {
	    char temp=s[i];
		s[i]=s[j];
		s[j]=temp;
	  }
	  return s;
	}




   char *strupr(char *s)
 {
   {
     for(int i=0;s[i] !='\0';i++)

   {
    if(s[i]>=97 && s[i]<=122)
	    s[i]-=32;
	}
        
   }
  return s;

 
}
     char *strlwr(char *s)
	 {
	    
       for(int i=0;s[i] !='\0';i++)
	     { 
		  if(s[i] >=65 && s[i]<=90)
		    {
		     s[i]+=32;
			}
		  }

			return s;
	     } 












