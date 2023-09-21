#include <stdio.h>
int main()
{
    int x,y,z;
    printf("Enter the  Daily Goal of Chef: ");
    scanf("%d",&x);
    printf("Enter the No. of Chocolate Sold: ");
    scanf("%d",&y);
    if (y>x){
        z=(y-x)*2+x;
        printf("Total Amount he made = %d",z);}
    else{
        z=y;
        printf("Total Amount he made = %d",z);}
}