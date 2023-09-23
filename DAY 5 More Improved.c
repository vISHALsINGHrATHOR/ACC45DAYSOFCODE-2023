#include <stdio.h>
int main()
{
    int x;
    scanf("%d",&x);
    if (x>15 && x<=100){
        printf("NO");}
    else if (x<=15 && x>=1){
        printf("YES");}
    else{
        printf("Invalid Battery %%");}
}