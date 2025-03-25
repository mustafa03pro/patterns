#include<stdio.h> 
int main(){
    int n,r,c,space;
    scanf("%d",&n);
    for(r=n;r>=1;r--){
        for(space=0;space<=r;space++){
            printf("   ");
        }
        for(c=0;c<(2*(n-r)-1);c++){
            printf(" * ");
        }
        printf("\n");
    }
    return 0;
}