#include<stdio.h>
int check_char(char str[],char ch);

 int main()
{
  char str[]="Downloads_yyy";
  
  printf("string is : %s\n",str);

  char ch;
  printf("Enter a character : \n");
  scanf("%c",&ch);

  int value =check_char(str,ch);
   
   printf("count is : %d\n",value);


return 0;
}
  

  int   check_char(char str[],char ch)
  { 
     int count=0;
    for(int i=0;str[i] !='\0';i++)
	  {
	    if(str[i]==ch)
		 {
		  
		   count++;
		  
		 }
	   }
        
	  printf("Character present is  : %c\n",ch);
	   
	  return count;
	    
   }
