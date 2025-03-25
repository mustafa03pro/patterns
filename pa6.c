#include<stdio.h>
int main(){
    int n,r,c;
    scanf("%d",&n);
    for(r=n;r>=1;r--){
        for(r=n;r>=1;r--){
            for(c=n;c>=1;c--){
                if(r>=c){
                    printf(" * ");
    
                }
                else printf("   ");
    
            }
        }
        for(int i=1;i<n;i++){
            for(int j=n;j>=i;j--){
               printf(" * ");
    
            }
        }   
        
    
        printf("\n");
    }

    return 0;

}
 
// for(r=1;r<=5;r++){
//     for ( c = 5; c >=r; c--)
//     {
//         printf(" * ");
//     }

//     for(int i=1;i<n;i++){
//         for(int j=n;j>=i;j--){
//            printf(" * ");

//         }
//     }    