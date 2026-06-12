#include<stdio.h>
#include<conio.h>
int max(int a ,int b);
void main(){
   int a,b,c;
   clrscr();
   printf("enter a");
   scanf("%d", &a);
   printf("enter b");
   scanf("%d", &b);
   c=max(a,b);
   printf("max(%d %d)=%d",a,b,c);
   getch();

}
int max(int a,int b){
   if(a>b){
      return a;
   }else{
      return b;
   }