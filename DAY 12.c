#include <stdio.h>
int main() {
   int a,b,c;
   /*Scaning the Values in Step 5*/
   scanf("%d %d %d",&a,&b,&c);
/*minimum time (in seconds) after which 
Mario should shoot the bullet, such that it hits the goomba*/
   if((b/a)<=c){
       printf(("%d"),c-(b/a));}
    else{
        printf("0");
    }
}