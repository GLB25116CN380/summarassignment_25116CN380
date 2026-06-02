#include<stdio.h>
int main(){
    int n,i;
    long long fact=1;
    printf("enter the number");
    scanf("%d", &n);
    for(i=1;i<=n;i++){
        fact=fact*i;
    }
    printf("the factorial is %lld",fact);
    
    return 0;   
}