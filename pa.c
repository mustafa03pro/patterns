#include<stdio.h>
int main(){
    int n,r,c;
    scanf("%d",&n);
    for(r=1;r<=n;r++){
        for(c=n;c>=r;c--){
            printf(" * ");

        }
        printf("\n");
    }
    return 0;

}