#include<stdio.h>
int main(){
    int n,r,c;
    scanf("%d",&n);
    int k=5;

    for(r=1;r<=n;r++){
        for(c=1;c<=n-r;c++){
            printf("   ");
            }
            for (c = r; c >= 1; c--) {
                if (c % 2 != 0) {
                    printf("%3d ", c); // Print odd numbers
                } else {
                    printf(" * "); // Print '*'
                }
             
        }
        printf("\n");
    }
    return 0;

}
//               1
//           *   1
//         3 *   1
//     *   3 *   1
//   5 *   3 *   1
        //         1
        //       * 1
        //     3 * 1
        //   * 3 * 1
        // 5 * 3 * 1
               