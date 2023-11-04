#include <stdio.h>
int main(){
    int a,b,c,d=0,e[100];
    scanf("%d %d",&a,&b);
    for(c=0;c<a;c++){
        scanf("%d",&e[c]);
        if(e[c]>=b){
            d++;
        }
    }
    printf("%d",d);
}