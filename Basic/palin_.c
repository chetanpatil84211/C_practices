#include<stdio.h>
#include<string.h>

int main() 
  {
    char str[] = "madam";  // Original string
    printf("Original str is: %s\n", str);  // Print original string

    int length = strlen(str);  // Length of the string

    char str1[length + 1];  // Create a copy of the original string
    strcpy(str1, str);  // Copy original string to str1
    printf("str1 (copy of str) is: %s\n", str1);  // Print copied string

    // Reverse the string
    for (int i = 0; i < length / 2; i++) 
	{
        int temp = str[i];
        str[i] = str[length - i - 1];
        str[length - i - 1] = temp;
    }
    printf("Reversed str is: %s\n", str);  // Print reversed string

    // Check if the original string and reversed string are the same
    if (strcmp(str, str1) == 0) {
        printf("Palindrome\n");  // It's a palindrome
    } 

	else {
        printf("Not palindrome\n");  // It's not a palindrome
    }

    return 0;
}

