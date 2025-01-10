#include <stdio.h>

int main(void) 

 {
    int sum = 0, arr[5];
    
    
    for (int i = 0; i < 5; i++) {
        printf("Enter marks for subject %d: ", i + 1);
        scanf("%d", &arr[i]);
        sum += arr[i];  // Add the entered marks to sum
    }
    
    // Calculate the percentage
    float percent = ((float)sum / 500) * 100;
    
    
    printf("Percentage is: %.2f%%\n", percent);
    
    return 0;
}

