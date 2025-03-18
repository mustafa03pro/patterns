#include<stdio.h>
int main(){
    int n,c,r;
    printf("enter the no of rows: ");scanf("%d",&n);
    
    for(r=n;r>=1;r--){
        for ( c = r; c >=1; c--)
        {
            printf("%3d",c);
        }
        printf("\n");
        
    }
    return 0;
}