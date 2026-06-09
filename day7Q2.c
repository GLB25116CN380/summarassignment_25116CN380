  #include<stdio.h>
#include<conio.h>
   int fibo(int n);
 void main(){
    int c,n,f;
    printf("enter the number of term ");
    scanf("%d",  &n);
    for(c=0;c<n;c++){
        f=fibo(c);
        printf("%d", f);
    }
    getch();
 }  
   int fibo(int n)
     {
        if(n==0||n==1)
        return(n);
        else
        return fibo(n-1)+fibo(n-2);
     }