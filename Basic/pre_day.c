#include<stdio.h>

int fun(int year);

int main() {
    int month;
    printf("Enter a month number (1-12): ");
    scanf("%d", &month);
    
    // Months with 31 days
    if(month == 1 || month == 3 || month == 5 || month == 7 || month == 8 || month == 10 || month == 12) {
        printf("Total days in this month: 31\n");
    }
    // Months with 30 days
    else if(month == 4 || month == 6 || month == 9 || month == 11) {
        printf("Total days in this month: 30\n");
    }
    // February case
    else {
        int year;
        printf("Enter a year: ");
        scanf("%d", &year);
        
        int daysInFeb = fun(year);  // Get the number of days in February
        printf("February has %d days in %d.\n", daysInFeb, year);
    }
    
    return 0;
}

int fun(int year) {
    // Leap year checking logic
    if ((year % 400) == 0) {
        return 29;  // Leap year
    }
    else if ((year % 100) == 0) {
        return 28;  // Not a leap year
    }
    else if ((year % 4) == 0) {
        return 29;  // Leap year
    }
    else {
        return 28;  // Not a leap year
    }
}

