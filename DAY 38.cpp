#include <stdio.h>
int main(){
    int a,b,c,d,e,f,g;
    scanf("%d %d %d %d",&a,&b,&c,&d);
    e=a-b;
    f=c-d;
    g=e+f;
    if(g>0){
        printf("YES");
    }
    else{
        printf("NO");
    }
}