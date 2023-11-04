#include <stdio.h>
int main(){
    int a,b,c,d;
    scanf("%d %d %d %d",&a,&b,&c,&d);
    if(a==b || a==c || a==d){
        printf("YES");
    }
    if(a==b+c || a==b+d){
        printf("YES");
    }
    if(a==c+d || a==b+c+d){
        printf("YES");
    }
    else{
        printf("NO");
    }
}