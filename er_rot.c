// Vasile-Daniel DAN 
// Start Project: 28 May 2024

#include <stdio.h>

/* Calculate the machine epsilon (relative round-off error) */
int main() {
    float epsilon = 1.0f;           /* Relative round-off error */
    int order = 0;                  /* Order of the error */

    while ((1.0f + epsilon) != 1.0f) {
        epsilon /= 2.0f;
        order++;
    }

    epsilon *= 2.0f;  // Adjust epsilon to the last value that was not equal to 1.0
    order--;

    printf("The machine epsilon is: %.100f\n", epsilon);
    printf("The order of the error is: %d\n", order);

    return 0;
}
