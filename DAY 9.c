#include <stdio.h>
int main() {
   int a,b,c=0;
   printf("Enter Cost of renting the cooler for a Month -\n");
   scanf("%d",&a);
   printf("Enter Cost of buying a cooler -\n");
   scanf("%d",&b);
   while (a*c<b){
       c++;}
   printf("Chef can rent the cooler for %d months",c);
}