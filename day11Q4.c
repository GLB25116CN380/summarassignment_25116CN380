#include<stdio.h>
void main(){
   int n; 
   printf("enter the number");
   scanf("%d", &n);
   printf("factorial is %d",fact(n));
}
 int fact(int x){
   int i,f=1;
   for(i=1;i<=x;i++){
      f=f*i;
   }
   return(f);
 }