#include<stdio.h>
int main(){
   int x,y,z,n;
   printf("\n enter max limit");
   scanf("%d", &n);
   while(z<=n){
    printf("\n%d", z);
         x=y;
         y=z;
         z=x+y;
   }
    return 0;

}