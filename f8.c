// 1 0 1 0 1
// 0 1 0 1 0
// 1 0 1 0 1
// 0 1 0 1 0 
// 1 0 1 0 1

#include<stdio.h>
int main(){
    int r,c,n,a=1;
    scanf("%d",&n);
    for(r=1;r<=n;r++){
        
        for(c=1;c<=n;c++){
            if(r%2!=0){
                if (c % 2 != 0) {
                    printf(" 1 ");
                } else {
                    printf(" 0 ");
                }

            }
            else{
                if (c % 2!= 0) {
                    printf(" 0 ");
                } else {
                    printf(" 1 ");
                }
            }
            
                

            
        }
        printf("\n");

    }
    return 0;
}
// 5
//  1  0  1  0  1 
//  0  1  0  1  0
//  1  0  1  0  1
//  0  1  0  1  0
//  1  0  1  0  1