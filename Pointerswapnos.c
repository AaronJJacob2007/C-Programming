#include <stdio.h>

int main() {
    int a, b, *p, *q, t;

    scanf("%d %d", &a, &b);
    printf("a= %d ,b = %d\n", a, b);
    p = &a;
    q = &b;

    t = *p;
    *p = *q;
    *q = t;

    printf("a= %d ,b = %d", a, b);
    return 0;
}
