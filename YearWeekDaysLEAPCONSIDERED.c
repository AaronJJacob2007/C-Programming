#include <stdio.h>

int isLeap(int year) {
    if ((year % 4 == 0 && year % 100 != 0) || (year % 400 == 0))
        return 1;
    else
        return 0;
}

int main() {
    int days, year, weeks = 0, remDays;
    int startYear;

    printf("Enter total days: ");
    scanf("%d", &days);

    printf("Enter starting year: ");
    scanf("%d", &startYear);

    year = 0;
    remDays = days;

    while (1) {
        int daysInYear = isLeap(startYear) ? 366 : 365;

        if (remDays >= daysInYear) {
            remDays -= daysInYear;
            year++;
            startYear++;
        } else {
            break;
        }
    }

    weeks = remDays / 7;
    remDays = remDays % 7;

    printf("Years=%d Weeks=%d Days=%d", year, weeks, remDays);

    return 0;
}
