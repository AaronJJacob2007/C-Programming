#include <stdio.h>

struct Student {
    int roll;
    int m1, m2, m3;
    int total;
    float avg;
};

int main() {
    struct Student s;

    printf("Enter roll number: ");
    scanf("%d", &s.roll);

    printf("Enter marks of 3 subjects: ");
    scanf("%d %d %d", &s.m1, &s.m2, &s.m3);

    s.total = s.m1 + s.m2 + s.m3;
    s.avg = s.total / 3.0;

    printf("Total = %d\n", s.total);
    printf("Average = %.2f\n", s.avg);

    return 0;
}
