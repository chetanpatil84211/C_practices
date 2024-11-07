#include<stdio.h>

int main() {
    int a = 0, b = 1, c, n, add = 0;
    
    printf("Enter a positive integer n: ");
    scanf("%d", &n);
    
    // Handle edge cases for invalid or zero inputs
    if (n <= 0) {
        printf("Please enter a positive integer greater than 0.\n");
        return 1;  // Exit the program with an error code
    }
    
    printf("Fibonacci sequence up to %d terms:\n", n);
    
    // Generate the Fibonacci sequence and calculate the sum
   
   for(int i = 0; i < n; i++) {
        printf("%d\t", a);
        add += a;
        
        c = a + b;
        a = b;
        b = c;
    }
    
    // Print the sum 
    printf("\nSum of Fibonacci numbers up to %d terms: %d\n", n, add);
    
    return 0;
}

