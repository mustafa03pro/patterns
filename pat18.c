#include<stdio.h>
int main(){
    int n,c,r,e=0,o=-1;
    printf("enter the no of rows: ");scanf("%d",&n);
    
    for(r=1;r<=n;r++){
        for ( c = 1; c <=r; c++)
        {
            if(r%2==0)printf("%3d",e=e+2);
            else printf("%3d",o=o+2);
        }
        printf("\n");
        
    }
    return 0;
}