#include <stdio.h>
#include <stdlib.h> // Required for malloc() and realloc()

int main() {
    int *ptr;
    int initial_size = 5;
    int new_size = 10;
    int i;

    // 1. Allocate memory using malloc()
    ptr = (int*)malloc(initial_size * sizeof(int));
    if (ptr == NULL) {
        printf("Memory allocation failed\n");
        return 1;
    }
    printf("Initial memory allocated for %d integers.\n", initial_size);

    // 2. Fill values
    for (i = 0; i < initial_size; i++) {
        ptr[i] = i + 1;
    }
    printf("Values filled successfully.\n");

    // 3. Reallocate memory using realloc()
    // Store in a temp pointer first to prevent memory leak if realloc fails
    int *temp_ptr = (int*)realloc(ptr, new_size * sizeof(int));
    
    if (temp_ptr == NULL) {
        printf("Memory reallocation failed\n");
        free(ptr); // Free original block if reallocation fails
        return 1;
    }
    ptr = temp_ptr; // Update the original pointer
    printf("Memory reallocated to new size of %d integers.\n", new_size);

    // Fill the newly allocated part with values
    for (i = initial_size; i < new_size; i++) {
        ptr[i] = i + 1;
    }

    // Display all values
    printf("All values in the reallocated memory block:\n");
    for (i = 0; i < new_size; i++) {
        printf("%d ", ptr[i]);
    }
    printf("\n");

    // Free the dynamically allocated memory
    free(ptr);
    ptr = NULL; // Good practice to avoid dangling pointers
    printf("Memory freed.\n");

    return 0;
}
