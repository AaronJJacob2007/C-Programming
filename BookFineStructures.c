#include <stdio.h>

// Define a structure for date
struct Date {
    int day;
    int month;
    int year;
};

// Define the Book structure
struct Book {
    char title[100];
    char author[50];
    struct Date issue;
    struct Date returnDate;
};

// Function to calculate the number of days between two dates (simplified for example)
// This is a complex calculation in C, a simple approximation is used here.
// For accurate date arithmetic, a robust library or algorithm is needed.
long int daysBetween(struct Date d1, struct Date d2) {
    // A simplified, rough estimate for this example (actual date calculation is complex)
    // This example assumes a fixed number of days per month/year for simplicity as specified in user request
    long int n1 = d1.year * 365 + d1.day;
    for (int i = 0; i < d1.month - 1; i++) {
        // Simplified: assuming all months have ~30 days
        n1 += 30; 
    }

    long int n2 = d2.year * 365 + d2.day;
    for (int i = 0; i < d2.month - 1; i++) {
        n2 += 30;
    }

    return (n2 - n1);
}


int main() {
    struct Book b;
    long int daysLate;
    float fine = 0.0;

    // Input book details
    printf("Enter book title: ");
    scanf("%s", b.title); // Reads single word title
    printf("Enter author name: ");
    scanf("%s", b.author);
    printf("Enter issue date (day month year): ");
    scanf("%d %d %d", &b.issue.day, &b.issue.month, &b.issue.year);
    printf("Enter return date (day month year): ");
    scanf("%d %d %d", &b.returnDate.day, &b.returnDate.month, &b.returnDate.year);

    // Calculate number of days late
    // Assuming a standard loan period is defined elsewhere, but based on prompt it's difference between dates.
    daysLate = daysBetween(b.issue, b.returnDate); 

    // Calculate fine if late
    if (daysLate > 0) {
        fine = daysLate * 2.0; // Fine = late days x 2
    }

    // Display book info and fine
    printf("\nBook Information:\n");
    printf("Title: %s\n", b.title);
    printf("Author: %s\n", b.author);
    printf("Days late: %ld\n", daysLate > 0 ? daysLate : 0);
    printf("Fine amount: %.2f\n", fine);

    return 0;
}
