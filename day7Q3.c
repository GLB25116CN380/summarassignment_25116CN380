 #include<stdio.h>
#include<conio.h>
   int sum(int n);
 void main(){
    int x;
    printf("enter the number ");
    scanf("%d",  &x);
    printf("sum is %d",sum(x));
   
    getch();
 }  
   int sum(int x)
     {
        if(x/10==0)
        return(x);
        return (x%10+sum(x/10));
     }