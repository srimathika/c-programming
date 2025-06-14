#include <stdio.h>

int main() {
    int day, month, year;
    int isValid = 1;

    printf("Enter the Date (dd/mm/yyyy): ");
    scanf("%d/%d/%d", &day, &month, &year);
    if (month < 1 || month > 12) {
        isValid = 0;
    }
    else if (month == 2) {
        int isLeap = (year % 4 == 0 && year % 100 != 0) || (year % 400 == 0);
        if ((isLeap && (day < 1 || day > 29)) || (!isLeap && (day < 1 || day > 28))) {
            isValid = 0;
        }
    }
    else if (month == 4 || month == 6 || month == 9 || month == 11) {
        if (day < 1 || day > 30) {
            isValid = 0;
        }
    }
    else {
        if (day < 1 || day > 31) {
            isValid = 0;
        }
    }

    if (isValid)
        printf("Valid Date\n");
    else
        printf("Invalid Date\n");

    return 0;
}
