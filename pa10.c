#include<stdio.h>
int main(){
    int n,r,c;
    scanf("%d",&n);
    for(r=1;r<=n;r++){
        for(c=1;c<=r;c++){
            printf(" * ");
        }
        
        printf("\n");
    }
    for(r=n-1;r>=1;r--){
        for(c=1;c<=r;c++){
            printf(" * ");
        }
        
        printf("\n");
    }
    return 0;
}
// 5
//  * 
//  *  *
//  *  *  *
//  *  *  *  *
//  *  *  *  *  *
//  *  *  *  *
//  *  *  *
//  *  *
//  *