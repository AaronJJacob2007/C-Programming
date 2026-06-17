#include <stdio.h>
#include <stdlib.h>

int main() {
    int n, i;
    int *a;

    printf("Enter size: ");
    scanf("%d", &n);

    a = (int *)malloc(n * sizeof(int));

    if (a == NULL) {
        printf("Memory not allocated");
        return 0;
    }

    printf("Enter %d elements:\n", n);
    for(i = 0; i < n; i++)
        scanf("%d", &a[i]);

    printf("Array elements:\n");
    for(i = 0; i < n; i++)
        printf("%d ", a[i]);

    free(a);
    return 0;
}
