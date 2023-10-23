#include <stdio.h>
int main(){
    int a,b,c,d;
    scanf("%d %d %d %d",&a,&b,&c,&d);
    if(a+b>=d){
        printf("YES");
    }
    if(b+c>=d){
        printf("YES");
    }
    if(c+a>=d){
        printf("YES");
    }
    else{
        printf("NO");
    }
}
