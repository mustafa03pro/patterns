#include<stdio.h>
int main(){
    int n,r,c;
    int a=1;
    scanf("%d",&n);
    for(r=1;r<=n;r++){
        for(c=1;c<=n;c++){
            if((r+c)<=5)printf("   ");
            else {
                printf("%3d",a);
                a+=2;
            }

        }
        printf("\n");
    }
    return 0;

}
// 5
//               1
//            3  5
//         7  9 11
//     13 15 17 19
//  21 23 25 27 29