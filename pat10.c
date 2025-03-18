#include<stdio.h>
int main(){
    int n,c,r;
    
    for(r=1;r<=5;r++){
        for ( c = 5; c >=r; c--)
        {
            printf(" ");
        }
        for (int i = 1; i <=r; i++)
        {
            printf("*");
        }
        
        printf("\n");
    }    
    // for(int i=1;i<=5;i++){// i=2  2<=5
    //     for(int j=5;j>=i;j--)   { // j=5  5>=2
    //          printf(" ");
    //     }
    //     for(int k=1;k<=i;k++){
    //          printf("*");
    //     }
    //     printf("\n");
    //   }
      
   
    
    return 0;
}