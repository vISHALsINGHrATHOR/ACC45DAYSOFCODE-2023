#include <stdio.h>
int main(){
    int a,b,c,d;
    scanf("%d %d %d %d",&a,&b,&c,&d);
    if(a-b>=0){
        if(a-b<=c){
            printf("YES");
        }
    }
    if(a-b<0){
        if(b-a<=d){
            printf("YES");
        }
    }
    else{
        printf("NO");
    }
}