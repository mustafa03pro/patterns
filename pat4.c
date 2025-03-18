#include<stdio.h>
int main(){
    int n,c,r,nr,nc;
    scanf("%d %d",&nr, &nc);
    char u='A',l='a';
    for(r=1;r<=nr;r++){
        for ( c = 1; c <=nc; c++)
        {
            if(r%2==0)printf("%2c",l);
            else printf("%2c",u);
        }
        if(r%2==0)l++;
        else u++;
        printf("\n");
        
    }
    return 0;
}