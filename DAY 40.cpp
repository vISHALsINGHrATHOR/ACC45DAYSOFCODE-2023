#include <stdio.h>
int main(){
    int a,c,d=0;
    scanf("%d",&a);
    for(c=2;c<=a;){
        d=d+1;
        c=c+7;
    }
    printf("%d",d);
}