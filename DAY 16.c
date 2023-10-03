#include <stdio.h>
int main() {
    int a,b,c;
    scanf("%d %d",&a,&b);
    c=a/b;
    if(c==0 || c%2!=0 ){
        printf("NO");}
    else{
        printf("YES");}}