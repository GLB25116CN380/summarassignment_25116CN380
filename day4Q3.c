#include<stdio.h>
int main(){
   int i,sum=0,x;
   printf("enter the number ");
   scanf("%d", &i);
   x=i;
   while(i>0){
    sum=sum+(i%10)*(i%10)*(i%10);
    i=i/10;
   }
   if(sum==x)
       printf("\n armstrong number");
   else{
       printf("\n not armstrong number");
   }
    return 0;

}