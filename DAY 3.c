#include <stdio.h>
int main()
{
    int x,y,z;
    printf("Enter the No. of Students:");
    scanf("%d",&x);
    printf("Enter the No. of Chairs :");
    scanf("%d",&y);
    z=x-y;
    if (y>=x){
    printf("No. of Chairs Required = 0");}
    else{
    printf("No. of Chairs Required = %d",z);}
}