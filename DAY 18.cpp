#include <stdio.h>
int main(){
    int a,b,c,d;
    scanf("%d %d",&a,&b);
    c=7-a;
    d=7-b;
    if(c>d || c==d){
        printf("%d",d);
    }
    if(c<d){
        printf("%d",c);
    }
}