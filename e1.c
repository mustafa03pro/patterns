// Que-1              
// ______________
// 1  6  11  20  21
// 2  7  12  17  22
// 3  8  13  18  23
// 4  9  14  19  24
// 5  10  15  16  25

#include<stdio.h>
int main(){
    int n,c,r,a,b;
    printf("enter the no of rows: ");scanf("%d",&n);
    
    for(r=1;r<=n;r++){
        a=n-r;
        b=a+r;

        
        for (c=1; c<=n; c++)
        {
            if(c==1||c==2||c==3||c==5)printf("%d ",r);
            else printf("%d ",b);a--;b+=a;
        }
        printf("\n");
        
    }
    return 0;
}