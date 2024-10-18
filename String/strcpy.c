//strcpy()

#include<stdio.h>
int main()
{  
    int i;
    char str[20]="Patil";
    char str1[]="Chetan_Patil";
    
    printf("str is : %s\n",str);
    printf("str1 is : %s\n",str1);
    
    for( i=0;str1[i] !='\0';i++)
     {
         str[i]=str1[i];
     }
     str[i]='\0';
     
     printf("str is : %s\n",str);
     printf("str1 is : %s\n",str1);
     
     return 0;
}
