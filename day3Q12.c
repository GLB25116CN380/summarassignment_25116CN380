#include<stdio.h>
 int main(){
  int n1,n2,temp,lcm,i;
  printf("enter two numbers\n");
  scanf("%d%d", &n1, &n2);
  if(n2>n1){
    temp=n1;
    n1=n2;
    n2=temp;
  }
   for(i=1;i<=100;i++){
    lcm=n1*i;
    if((lcm%n2)==0){
        printf("lcm of %d and %d is %d",n1,n2,lcm);
        break;
    }
   }
    return 0;
}