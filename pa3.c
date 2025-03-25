#include<stdio.h>
int main(){
    int n,r,c;
    scanf("%d",&n);
    int k=2;
    for(r=1;r<=n;r++){
        for(c=1;c<=n;c++){
            if(r==n||c==n||(r+c)==n+1)printf(" 1 ");
            else if((r+c)<=5){
                printf("   ");
            }
            else {
                printf("%3d",k);
                k+=1;
            }

        }
        printf("\n");
    }
    return 0;

}