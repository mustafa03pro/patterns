#include<stdio.h>
int main(){
    int n,c,r;
    printf("enter the no of rows: ");scanf("%d",&n);
    
    for(r=1;r<=n;r++){
        for ( c = 1; c <=n; c++)
        {
            if(c<=n-r)printf(" 1");
            else printf("%2d",r);
        }
        printf("\n");
        
    }
    return 0;
}