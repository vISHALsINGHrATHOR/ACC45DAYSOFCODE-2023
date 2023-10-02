#include <stdio.h>
int main() {
    int a,b,c;
    scanf("%d %d",&a,&b);
    if(a>=b){
        if(a==b){
            printf("1");}
        if(a!=b){
            c=a%b;
            printf("%d", ((a-c)/b)+c);}}
    if(a<b){
        printf("%d",a); }}