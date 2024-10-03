#include<stdio.h>
int main()
{
/*The main function in C is the entry point of a 
program where the execution of a program starts. 
It is a user-defined function that is mandatory 
for the execution of a program because when a C 
program is executed, the operating system starts 
executing the statements in the main() function.

Syntax of C main() Function

return_type main() {
    // Statement 1;
    // Statement 2;
    // and so on..
    return;
}
  
 int main(){} or int main(void){}

 Important Points about C main Function
It is the function where the program’s execution starts.
Every program has exactly one main function.
The name of this function should be “main” not anything else.
The main function always returns an integer value or void.
The main function is called by OS, not the user.

Types of C main Functions
1)Main function with no arguments and void return type
2)Main function with no arguments and int return type
3)Main function with the Command Line Arguments

*/

printf("Hello World");

   return 0;
}
