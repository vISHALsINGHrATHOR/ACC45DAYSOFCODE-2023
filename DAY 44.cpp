#include <stdio.h>
int main(){
    int a,b;
    scanf("%d %d",&a,&b);
    if(a>b){
        printf("%d",(a-b)+a);
    }
    if(b>=a){
        printf("%d",a);
    }
}