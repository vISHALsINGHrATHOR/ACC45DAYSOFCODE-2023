#include <stdio.h>
int main(){
    int a,b,c,d=1,e=2,f=3,g=4;
    scanf("%d %d",&a,&b);
    for(c=0;c<a+b;c++){
        d=d+4;
        e=e+4;
        f=f+4;
        g=g+4;
    }
    if(d==a+1 || e==a+1){
        printf("ALICE");
    }
    else{
        printf("BOB");
    }
}