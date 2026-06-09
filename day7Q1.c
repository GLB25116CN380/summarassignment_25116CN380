   #include<stdio.h>
#include<conio.h>
   int fact(int);
 void main(){
    int n,f;
    printf("enter the number");
    scanf("%d",  &n);
    f= fact(n);
    printf("factorial is %d",f);
    getch();
 }  
   int fact(int n)
     {
        if(n==0)
        return(1);
        else
        return(n*fact(n-1));
     }