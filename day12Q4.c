#include<stdio.h>
int isperfect(int n){
    int i,s=0;
    for(i=1;i<n;i++)
    if(n%i==0)
    s=s+i;
    return s==n;
}
void main(){
    int n;
    printf("\n enter the number");
    scanf("%d", &n);
    if(isperfect(n)){
      printf("\n the number is perfect number");
     } else{
        printf("\n the number is not perfect number");
}
}
    