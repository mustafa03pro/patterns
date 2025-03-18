#include<stdio.h>
int main(){
    int n,c,r,a=1,b;
    printf("enter the no of rows: ");scanf("%d",&n);
    
    for(r=1;r<=n;r++){
        b=a+r-1;
        for ( c = 1; c <=r; c++,a++)
        {
            if(r%2==0)printf("%3d",b--);
            else printf("%3d",a);
        }
        printf("\n");
        
    }
    return 0;
}