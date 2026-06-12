#include<stdio.h>
#include<math.h>
void armstrong(int);
void main(){
    int n;
    printf("\n enter number");
    scanf("%d", &n);
    armstrong(n);
}
   void armstrong(int m) {
    int c=0,sum=0,i,t;
    for(i=m;i>0;i=i/10){
        t=i%10;
        sum=sum+pow(t,c);
    }
    if(m==sum){
        printf("armstrong number");

    }else{
        printf("not armstrong number");
    }
}   