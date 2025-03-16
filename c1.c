#include<stdio.h>
int main(){
    int n,i=1,s=0;
    printf("enter the no: ");scanf("%d",&n);
    if(n<0){
        printf("please entre the positive no");return 0;
    }
    while (i<=n)
    {
        if(i%n==0){
            s=s+i;
        }
        i++;
    }
    if(s==n){
        printf("%d is a perfect no",s);

    }
    else{
        printf("%d is  not a perfect no",n);
    }
    
    return 0;
}