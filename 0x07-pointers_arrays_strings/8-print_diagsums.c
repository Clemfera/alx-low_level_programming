#include <stdio.h>

void print_diagsums(int *a, int size) {
    int mainDiagonalSum = 0;
    int secondaryDiagonalSum = 0;

    // Calculate the sum of the main diagonal and secondary diagonal
    for (int i = 0; i < size; i++) {
        mainDiagonalSum += a[i * size + i];  // Elements on the main diagonal are at (i, i)
        secondaryDiagonalSum += a[i * size + (size - 1 - i)];  // Elements on the secondary diagonal are at (i, size - 1 - i)
    }

    // Print the sum of the diagonals
    printf("Main diagonal sum: %d\n", mainDiagonalSum);
    printf("Secondary diagonal sum: %d\n", secondaryDiagonalSum);
}
