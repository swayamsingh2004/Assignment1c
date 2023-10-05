#include <stdio.h>

int main() {
    int day, month, year;

    
    printf("Enter the day, month, and year (e.g., 15 8 2022): ");
    scanf("%d %d %d", &day, &month, &year);

    
    printf("Date in format: ");

    
    switch (day) {
        case 1:
        case 21:
        case 31:
            printf("%dst ", day);
            break;
        case 2:
        case 22:
            printf("%dnd ", day);
            break;
        case 3:
        case 23:
            printf("%drd ", day);
            break;
        default:
            printf("%dth ", day);
            break;
    }

    // Display the month in abbreviated form
    switch (month) {
        case 1:
            printf("Jan");
            break;
        case 2:
            printf("Feb");
            break;
        case 3:
            printf("Mar");
            break;
        case 4:
            printf("Apr");
            break;
        case 5:
            printf("May");
            break;
        case 6:
            printf("Jun");
            break;
        case 7:
            printf("Jul");
            break;
        case 8:
            printf("Aug");
            break;
        case 9:
            printf("Sep");
            break;
        case 10:
            printf("Oct");
            break;
        case 11:
            printf("Nov");
            break;
        case 12:
            printf("Dec");
            break;
        default:
            printf("Invalid month");
            return 1;
    }

    
    printf(", %d\n", year);

    return 0;
}
