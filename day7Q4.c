#include<stdio.h>
   int rev(int);
 int main(){
    int num,r;
    printf("enter the number ");
    scanf("%d",  &num);
    r=rev(num);
    printf("reverse of the number is %d",r);
    return 0;
    }
    
   int rev(int num)
     {
        static sum,r;
        if(num){
            r=num%10;
            sum=sum*10+r;
            rev(num/10);
        }
        else 
        return 0;
        return sum;
     }