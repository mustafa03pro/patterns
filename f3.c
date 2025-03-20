#include<stdio.h>
int main(){
    int c1=9;
    int c2=1;
    for(int i=1;i<=5;i++){
        int temp=i;
        for(int j=1;j<=5;j++){
            if(j%2!=0 && j==1)
            {
                printf("%5d",temp);
                // temp=temp+c1;
            }
            else if(j%2==0 && j>1){
                temp=temp+c1;
                printf("%5d",temp);
            }

            else {
                temp=temp+c2;
                printf("%5d",temp);
            }
               
        }
        c1=c1-2;
        c2=c2+2;
        printf("\n");

    }
    return 0;

}