//Print Lower case in  english Alphabet

#include<stdio.h>
int main()
{
    for(int i=97;i<=122;i++)
      {
          printf("%c\t",i);
      }
      
      printf("\n");
      
      char ch='a';
      do{
          printf("%c\t",ch);
          ch++;
          
      }while(ch<='z');
      
      printf("\n");
      
      char x;
      for(x='a';x<='z';x++)
        {
            printf("%c\t",x);
        }

		printf("\n");
      
      return 0;
}
