#include<stdio.h>
int main(){
    int n,c,r,nr,nc;
    scanf("%d %d",&nr, &nc);
    int a=1;
    for(r=1;r<=nr;r++){
        for ( c = 1; c <=nc; c++)
        {
            if(r==1||c==1||r==nr||c==nc)printf("%3c",'*');
            
            else printf("%3d",a++);
        }
        printf("\n");
        
    }
    return 0;
}