#include<stdio.h>
int main()
{ 
       int n;
       printf("Enter a number : ");
       scanf("%d",&n);
       
      for(int i=1;i<=n;i++)
       {    char ch='A';
            for(int k=1;k<=n-i;k++)
               {
                   printf(" ");
               }
            for(int j=1;j<=2*i-1;j++)
              {
                  printf("%c",ch);
                  ch++;
              }
              printf("\n");
       }

    return 0;
}
/*
Enter a number : 13
            A
           ABC
          ABCDE
         ABCDEFG
        ABCDEFGHI
       ABCDEFGHIJK
      ABCDEFGHIJKLM
     ABCDEFGHIJKLMNO
    ABCDEFGHIJKLMNOPQ
   ABCDEFGHIJKLMNOPQRS
  ABCDEFGHIJKLMNOPQRSTU
 ABCDEFGHIJKLMNOPQRSTUVW
ABCDEFGHIJKLMNOPQRSTUVWXY
*/
