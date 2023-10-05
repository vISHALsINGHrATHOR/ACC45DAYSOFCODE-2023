#include <stdio.h>
int main() {
    int a;
    scanf("%d",&a);
    if(a>=1 & a<=10){
        printf("Lower Double");}
    if(a>=11 & a <=15){
        printf("Lower Single");}
    if(a>=16 & a<=25){
        printf("Upper Double");}
    if(a>=26 & a<=30){
        printf("Upper Single");}
}