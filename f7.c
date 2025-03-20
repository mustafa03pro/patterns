
// Que-6
// _________________
// 0  1  0  1  0
// 0  0  0  0  0
// 0  1  0  1  0
// 0  0  0  0  0 
// 0  1  0  1  0
#include<stdio.h>
int main(){
    int r,c,n,a=1;
    scanf("%d",&n);
    for(r=1;r<=n;r++){
        
        for(c=1;c<=n;c++){
            if(c==1 || c==n )printf(" 0 ");
            else if(r%2==0){
                printf(" 0 ");

            }
            else {
                if (c % 2 == 0) {
                    printf(" 1 ");
                } else {
                    printf(" 0 ");
                }
            }
        }
        printf("\n");

    }
    return 0;
}
// 5
//  0  1  0  1  0 
//  0  0  0  0  0
//  0  1  0  1  0
//  0  0  0  0  0
//  0  1  0  1  0