#include<stdio.h>
int main(){
    int i,n;
    printf("enter n");
    scanf("%d",&n);
    for(i=1;i<=n;i++){
        if(n%i==0){
            printf("\n%d is a factor",i);
        }
    }
        
    
    return 0;

}