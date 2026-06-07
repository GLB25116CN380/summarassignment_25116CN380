#include<stdio.h>
 int main(){
    int n,i,sum=0;
    printf("enter n");
    scanf("%d", &n);
    for(i=1;i<=n/2;i++){
        if(n%i==0) 
        sum=sum+i;
    }
     if(n==sum)
     {
       printf("perfect number");
     }
    else  {
     printf("not perfect number");
    }
    return 0;
 }