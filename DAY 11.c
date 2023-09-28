#include <stdio.h>
int main() {
   int a,b,c;
   /*by 5th line inserting the number of runs required 
   to win the game and the remaining number of overs.*/
   scanf("%d %d",&a,&b);
   c=b*6;
   //printing yes if he can win the game and no if ge can't 
   if(c*6>=a){
       printf("YES");}
    else{
        printf("NO");
    }
}