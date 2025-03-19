#include<stdio.h>

int main() {
    int n, c, r, a, b;
    
    // Input the number of rows
    printf("Enter the number of rows: ");
    scanf("%d", &n);
    
    // Loop through each row
    for(r = 1; r <= n; r++) {
        a = n ;  // Initialize a for each row
        b = a + r;  // Initialize b for each row

        // Loop through each column
        for(c = 1; c <= n; c++) {
            if(c == 1 ) {
                // For the first, second, third, and fifth columns, print the row number
                printf("%d ", r);
            } else {
                // For the other columns, print the value of b and update a and b
                printf("%d ", b);
                  // Decrement a
                b += n;  // Update b by adding a
            }
        }
        printf("\n");  // Move to the next line after finishing a row
    }

    return 0;
}
