#include<stdio.h>

int main() {
    int n, c, r, a, b;
    
    
    printf("Enter the number of rows: ");
    scanf("%d", &n);
    
    
    for(r = n; r >= 1; r--) {
         
        b = r;  

        
        for(c = 1; c <= n; c++) {
            printf("%d ", b);
                 
                b += n;  
            }
        
        printf("\n"); 
    }

    return 0;
}
