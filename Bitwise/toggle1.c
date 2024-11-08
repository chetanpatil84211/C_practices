#include <stdio.h>

int toggle_bit(int n);

int main()
{
    int n;
    printf("Enter a number: ");
    scanf("%d", &n);
   
    int r = toggle_bit(n);
    
    printf("Result is: %d\n", r);
}

int toggle_bit(int n)
{
    // Toggle bits at positions 0, 1, 2, and 3
    int k = (n ^ ((1 << 3) | (1 << 2) | (1 << 1) | (1 << 0)));
    return k;
}

