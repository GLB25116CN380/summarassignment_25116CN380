#include<stdio.h>
 int main(){
    int n,r,i,fact,strong,sum=0;
    printf("enter n");
    scanf("%d", &n);
    strong=n;
    while(n!=0){
      r=n%10;
      fact=1;
      for(i=1;i<=r;i++){
        fact=fact*i;
        sum=sum+fact;
        n=n/10;
      }
      if(strong==sum)
      {
        printf("strong number");
      }
      else{
        printf("not perfect number");
    }
    return 0;
 }