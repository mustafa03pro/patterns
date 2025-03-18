#include<stdio.h>
int main(){
    int n,c,r,a;
    printf("enter the no of rows: ");scanf("%d",&n);
    a=n*(n+1)/2;

    
    for(r=1;r<=n;r++){
        for ( c = 1; c <=r; c++)
        {
            printf("%3d",a--);
        }
        printf("\n");
        
    }
    return 0;
}