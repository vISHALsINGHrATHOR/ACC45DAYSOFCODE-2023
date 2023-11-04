#include <stdio.h>
int main(){
    int a,b,c;
    scanf("%d %d",&a,&b);
    c=a/100*10;
    if((a-c)<b){
        printf("Online");
    }
    else if((a-c)>b){
        printf("Dining");
    }
    else if((a-c)==b){
        printf("Either");
    }
}