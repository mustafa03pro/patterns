// #include<stdio.h>
// int main(){
//     int n,r,c;
//     scanf("%d",&n);
//     for(r=1;r<=n;r++){
//         for(c=1;c<=r;c++){
//             if((c+r)<=n)printf("   ");
//             else if(c==n)printf(" * ");
//             else printf(" * ");
//         }
        
//         printf("\n");
//     }
//     for(r=n-1;r>=1;r--){
//         for(c=1;c<=r;c++){
//             if((r+c)<=n)printf("   ");
//             else if(c==n)printf(" * ");
//             else printf(" * ");
//         }
        
//         printf("\n");
//     }
//     return 0;
// }
#include <stdio.h>

int main() {
    int n, r, c, space;
    
    printf("Enter the number of rows: ");
    scanf("%d", &n);

    for (r = n; r >=1; r--) {
        // Print leading spaces
        for (space = 0; space < r; space++) {
            printf("   ");
        }

        // Print stars
        for (c = n; c >=1 ; c++) {
            printf(" * ");
        }

        printf("\n"); // Move to next line
    }
    for (r = 0; r < n; r++) {
        // Print leading spaces
        for (space = 0; space < r; space++) {
            printf("   ");
        }

        // Print stars
        for (c = n-1; c >=1; c++) {
            printf(" * ");
        }

        printf("\n"); // Move to next line
    }

    return 0;
}
