#include <stdio.h>
int main(){
    int a,b,c,d;
    scanf("%d %d %d %d",&a,&b,&c,&d);
    if(b+c+d<=a){
        printf("0");
    }
    else{
        if(b+d<=a || c+d<=a){
            printf("1");
        }
        else{
            printf("2");
        }
    }
}
