#include<stdio.h>
#include<string.h>
void convertOpposite(char *str);
int main(void)
{ 
   char str[]="coNvERt";
   printf("%s\n",str);
   printf("strlen(str)=%ld\n",strlen(str));
   convertOpposite(str);

   printf("%s\n",str);
   printf("strlen(str)=%ld\n",strlen(str));

  return 0;
 }

 void convertOpposite(char *str)
  {
   int ln=strlen(str);

     for(int i=0;i<ln;i++)
	   {
	     if(str[i]>='a' && str[i]<='z')
		   {
		     str[i]=str[i]-32;
			}
		  else if(str[i]>='A' && str[i]<='Z')
		   {
		     str[i]=str[i]+32;
		   }
	    }
   }

/*
coNvERt
strlen(str)=7
COnVerT
strlen(str)=7
*/
