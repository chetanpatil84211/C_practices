/*write a program to print numbers from 1 to 80
seprated by tab , 8 numbers per line
*/

#include<stdio.h>

int main(void)
{
    for(int i=1;i<=80;i++)
     {
        printf("%d\t",i);
         
		 if(i%8==0)
            printf("\n");
     }
     
    
     return 0;
}
