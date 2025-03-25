#include <stdio.h>

int main() {
    int n, r, c, space;
    
    printf("Enter the number of rows: ");
    scanf("%d", &n);

    for (r = 0; r < n; r++) {
        // Print leading spaces
        for (space = 0; space < r; space++) {
            printf("   ");
        }

        // Print stars
        for (c = 0; c < (2 * (n - r) - 1); c++) {
            printf(" * ");
        }

        printf("\n"); // Move to next line
    }

    return 0;
}
