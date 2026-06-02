#include<stdio.h>
int main(){
    int n,i,product;
    printf("enter the given number\n");
    scanf("%d", &n);
    for(i=1;i<=10;i++){
        product= n*i;
    }
    printf("the multiplication table is %d",product);
    return 0;
}