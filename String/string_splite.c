#include<stdio.h>
int main()
{
    char str[20];
    printf("Enter a string ");
    scanf("%[^\n]s",str);
    printf("str is :%s\n",str);
    
    /*(int i=0;str[i] !='\0';i++)
     {
         printf("%d\t",str[i]);
     }*/
     for(int i=0;str[i] !='\0';i++)
      {
          if(str[i]==' ')
           {
               printf("\n");
           }
           printf("%c",str[i]);
      }

  printf("\n");
    
    return 0;
    
}
/*
Enter a string This is a simple String
str is :This is a simple String
This
 is
 a
 simple
 String
*/
