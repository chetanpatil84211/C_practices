#include <stdio.h>

int set(int num); // Function prototype

int main() {
    int num;
    printf("Enter a number: ");
    scanf("%d", &num); // Read user input
    int result = set(num); // Call set function
    printf("Result is: %d\n", result); // Print result
    return 0;
}

int set(int num) {
    // Set the 0th and 1st bits of num
    return (num | (1 << 1 | 1 << 0));
}

