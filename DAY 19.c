#include <stdio.h>
int main(){
    int a,b,c,d;
    scanf("%d %d %d %d",&a,&b,&c,&d);
    if(a+b>c+d){
        printf("Q");
    }
    if(a+b<c+d){
        printf("P");
    }
    if(a+b==c+d){
        printf("TIE");
    }
}
