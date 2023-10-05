#include <stdio.h>


int isLeapYear(int year) {
    return ((year % 4 == 0 && year % 100 != 0) || (year % 400 == 0));
}


int daysInMonth(int month, int year) {
    switch (month) {
        case 1: case 3: case 5: case 7: case 8: case 10: case 12:
            return 31;
        case 4: case 6: case 9: case 11:
            return 30;
        case 2:
            return isLeapYear(year) ? 29 : 28;
        default:
            return -1;
    }
}

int main() {
    int day, month, year, daysToAdd;

    printf("Enter the initial date (day month year): ");
    scanf("%d %d %d", &day, &month, &year);

    printf("Enter the number of days to add: ");
    scanf("%d", &daysToAdd);

    while (daysToAdd > 0) {
        int daysInCurrentMonth = daysInMonth(month, year);

        if (day < daysInCurrentMonth) {
            day++;
        } else {
            day = 1;
            if (month < 12) {
                month++;
            } else {
                month = 1;
                year++;
            }
        }

        daysToAdd--;
    }

    printf("New date: %02d-%02d-%04d\n", day, month, year);

    return 0;
}
