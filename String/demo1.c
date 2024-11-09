#include <stdio.h>

int main() 
{
    char str[50];
    printf("Enter a line of text: ");
    //scanf("%[^\n]", str);  // Read until newline
	scanf("%[^\n]s",str);
    printf("You entered: %s\n", str);
    return 0;
}

