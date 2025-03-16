#include<stdio.h>
int main(){
    int nr,nc,n,r,c,a=1;
    printf("enter the rows and coloumn: ");
    scanf("%d%d",&nr,&nc);
    for ( r = 1; r <= nr; r++)
    {
        for ( c = 1; c <=nc; c++)
        {
            printf( "%3d",a++);
        }
        printf("\n");
        
    }
    

    return 0;
}