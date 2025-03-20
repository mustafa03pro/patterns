#include<stdio.h>
int main(){
    int r,c,n,a;
    scanf("%d",&n);
    for(r=1;r<=n;r++){
        int a=r;
        for(c=1;c<=n;c++){
            printf("%3d ",a++);
        }
        printf("\n");

    }
    return 0;
}
// 5
//   1   2   3   4   5 
//   2   3   4   5   6
//   3   4   5   6   7
//   4   5   6   7   8
//   5   6   7   8   9 