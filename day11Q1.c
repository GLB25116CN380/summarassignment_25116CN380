#include<stdio.h>
 int sum(int x,int y){
    int s;
    s=x+y;
    return s;
 }
 main(){
    int a,b,s;
    printf("enter the value of a");
    scanf("%d", &a);
    printf("\nenter the value of b");
    scanf("%d", &b);
    s=sum(a,b);
    printf("\n sum is %d",s);
 }
