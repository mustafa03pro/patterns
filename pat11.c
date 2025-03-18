#include<stdio.h>
int main(){
    int n,c,r;
    printf("enter the no of rows: ");scanf("%d",&n);
    
    for(r=1;r<=n;r++){
        for ( c = 1; c <=r; c++)
        {
            printf("%3d",c);
        }
        printf("\n");
        
    }
    return 0;
}