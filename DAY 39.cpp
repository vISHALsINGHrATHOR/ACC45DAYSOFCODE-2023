#include <stdio.h>
int main(){
    int a,b,c,d;
    scanf("%d",&a);
    if(a>9){
        if(a%5!=0){
            printf("-1");
        }
        if(a%5==0){
            b=a%10;
            c=a-b;
            d=(b/5)+(c/10);
            printf("%d",d);
        }
    }
    else{
        if(a%5!=0){
            printf("-1");
        }
        if(a%5==0){
            printf("%d",a/5);
        }
    }
}