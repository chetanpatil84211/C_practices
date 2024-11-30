#include <stdio.h>

int main()
{
    printf("Jalgaon\n");
    goto label;  // Jump to label within main

label:
    printf("Pune\n");
    return 0;
}




/*#include<stdio.h>
void func(void);

int main()
{
  printf("Jalgaon\n");
  goto label;
  
   return 0;
 }

 void func(void)
  {
   label:
    printf("Pune\n");
  }


 1 Scope of label: The label is defined inside func(), 
 which means it is not visible in main(). 
 A goto can only jump to a label within the same function 
 scope, not from main() to func().
 2 goto should target a label within the same function: Since label 
 is inside func(), the goto label; in main() is invalid.
*/
