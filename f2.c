// Que-2
// _______________
// 1  10  11  20  21
// 2  9   12  19  22
// 3  8   13  18  23
// 4  7   14  17  24
// 5  6   15  16  25

#include<stdio.h>

int main() {
    int n, c, r, a, b;
    
    
    printf("Enter the number of rows: ");
    scanf("%d", &n);
    
    
    for(r = 1; r <= n; r++) {
        a = n ;  
        b = a + r;  

        
        for(c = 1; c <= n; c++) {
            if(c == 1 ) {
                
                printf("%d ", r);
            } else {
                
                printf("%d ", b);
                 
                b += n;  
            }
        }
        printf("\n"); 
    }

    return 0;
}
