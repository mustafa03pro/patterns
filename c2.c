#include<stdio.h>
int main(){
    int n,i=1,rev=0,r=0;
    printf("enter the no: ");
    scanf("%d",&n);
    int temp=n;
    while(temp!=0)
    {
        r=temp%10;
        rev=rev*10+r;
        temp=temp/10;

        
    } 
    while (rev!=0){
        r=rev%10;
        switch (r)
        {
        case 0:printf("zero\t");break;
        case 1:printf("one\t");break;
        case 2:printf("two\t");break;
        case 3:printf("three\t");break;
        case 4:printf("four\t");break;
        case 5:printf("five\t");break;
        case 6:printf("six\t");break;
        case 7:printf("seven\t");break;
        case 8:printf("eight\t");break;
        case 9:printf("nine\t");break;
        
        
        
    } 
    rev=rev/10;
}
    
    
    
    
    return 0;
}