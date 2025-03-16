#include<stdio.h>
int main(){
    int nr,nc,n,r,c;
    printf("enter the rows and coloumn: ");
    scanf("%d%d",&nr,&nc);
    for ( r = 1; r <= nr; r++)
    {
        for ( c = 1; c <=nc; c++)
        {
            printf(" %d ",r);
        }
        printf("\n");
        
    }
    

    return 0;
}