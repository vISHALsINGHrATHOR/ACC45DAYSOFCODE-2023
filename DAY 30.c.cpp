#include <stdio.h>
int main(){
    int a,b,c,d;
    scanf("%d %d %d",&a,&b,&c);
    if(a<=b){
        printf("0");
    }
    else{
        d=(a-b)*c;
        printf("%d",d);
    }
}