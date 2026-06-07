#include<stdio.h>
int main(){
    int num,largest;
    printf("enter the number");
    scanf("%d",&num);
    int n=num;
    for(int i=2;i<=n;i++){
        if(n%i==0){
            while(n%i==0){
                largest=1;
                n/=i;
            }
        }
    printf("the largest prime factor of a number %d is=%d",num,largest);
    }
    return 0;

}