#include<stdio.h>
int main(){
    int n,p,c=1,temp;
    printf("enter a number");
    scanf("%d", &n);
    printf("enter the power");
    scanf("%d", &p);

    for(int i=1;i<=p;i++){
        temp=n;
        c=c*temp;
    }
    printf("the result is %d",c);

    return 0;
}
