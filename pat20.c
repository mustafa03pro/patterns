#include<stdio.h>
int main(){
    int n,c,r,a=1;
    printf("enter the no of rows: ");scanf("%d",&n);
    
    for(r=1;r<=n;r++){
        for ( c = 1; c <=r; c++)
        {
            if((r+c)%2==0)printf("%3c",'$');
            else printf("%3c",'*');
        }
        printf("\n");
        
    }
    return 0;
}