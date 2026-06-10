#include<stdio.h>
int main(){
    int n;
    printf("enter the number of lines");
    scanf("%d", &n);
    
    for(int i=1;i<=n;i++){
        
        for(int q=1;q<=n-i;q++){
            printf(" ");
    }
       
        char ch='A';
        for(int j=1;j<=i;j++){
            printf("%c",ch);
            ch++;
       

        }
        ch-=2;
        for(int k=1;k<=i-1;k++){
            printf("%c",ch);
            ch--;
        }
        printf("\n");
        
    }
}