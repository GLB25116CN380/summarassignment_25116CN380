#include<stdio.h>
int isprime(int n){
   int i;
   if(n==1)
   return 0;
    for(i=2;i<n/2;i++)
        if(n%i==0)
         return 0;
   return 1;      
} 
 void main(){
   int n;
   printf("\n enter the number");
   scanf("%d", &n);
   if(isprime(n)){
      printf("\n the number is prime");
   }else{
      printf("the number is not prime");
 }
 }

