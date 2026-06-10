#include<stdio.h>
int main(){
    int n;
    printf("enter the number of lines");
    scanf("%d", &n);
    int nst = 2*n-1;
    for(int i=1;i<=n;i++){
        for(int k=1;k<=i-1;k++){
        printf(" ");
        }
    }
    

 for(int j=1;j<=nst;j++){
    printf("*");

}
 nst=nst-2;
  printf("\n");
 

return 0;
}