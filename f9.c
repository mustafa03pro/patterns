#include<stdio.h>
int main(){
    int r,c,n,f1=1,f2=1,f3;
    scanf("%d",&n);
    for(r=1;r<=n;r++){
        
        for(c=1;c<=n;c++){
            printf("%3d ",f1);
            f3=f2+f1;
            f1=f2;
            f2=f3;
            
        }
        printf("\n");

    }
    return 0;
}