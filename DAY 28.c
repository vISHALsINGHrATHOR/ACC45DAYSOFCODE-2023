#include <stdio.h>
int main(){
    int a,b,c;
    scanf("%d",&a);
    if(a%3==0){
        printf("0");
    }
    if(a>0){
        if(a%3!=0){
            b=a/3;
            c=(b+1)*3-2;
            if(c==a){
                printf("2");
            }
            else{
                printf("1");
            }
        }
    }
    if(a<0){
        printf("%d",-a);
    }
}
