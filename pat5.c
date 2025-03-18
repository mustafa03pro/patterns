#include<stdio.h>
int main(){
    int n,c,r;
    scanf("%d",&n);
    for(r=1;r<=n;r++){
        for ( c = 1; c <=n; c++)
        {
            if(r==c)printf(" 1");
            else if (r>c)printf(" 2");
            else printf(" 0");
        }
        printf("\n");
        
    }
    return 0;
}