#include<stdio.h>
#include<string.h>

int main()
{
     char str[]="Simple";
     char  str1[]="Sample";

	 printf("Using strcmp is : %d\n",strcmp(str,str1));
     int comp=0;

for(int i=0;str[i] !='\0' || str1[i] !='\0';i++)
{
    if(str[i] != str1[i])
     {
         comp=str[i]-str1[i];
         break;
     }
}
     
     printf("comparition  is : %d\n",comp);
     
     return 0;
}
