#include <stdio.h>
int main() {
   int a,b,c,d,e=0;
   printf("Enter Cost of renting the cooler for a Month -\n");
   scanf("%d",&a);
   printf("Enter Cost of buying a cooler -\n");
   scanf("%d",&b);
   for(d=1;d<13;++d){
       c=d*a;
       if(c<=b){
           e+=1;}
   }
   printf("Chef can rent the cooler for %d months",e);
}