#include<stdio.h>
int main(){
    int n,c,r,s;
    printf("enter the no of rows: ");scanf("%d",&n);
    
    for(r=1;r<=n;r++){
        for(int s=1;s<=n-r;s++)printf(" ");
        for (c=s; c<=r; c++)
        {
            printf("%d",c);
        }
        printf("\n");
        
    }
    return 0;
}