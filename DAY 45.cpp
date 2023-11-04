#include <stdio.h>
int main(){
    int a,b,c;
    scanf("%d %d %d",&a,&b,&c);
    if(a>b){
        if(a-b<=c){
            printf("YES");
        }
        else{
            printf("NO");
        }
    }
    if(b>=a){
        if(b-a<=c){
            printf("YES");
        }
        else{
            printf("NO");
        }
    }
}