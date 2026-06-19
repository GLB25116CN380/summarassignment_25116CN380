

#include<stdio.h>
int main(){
  int m1[2][2],m2[2][2],r,c,sum=0;
  printf("enter matrix elements\n");
       for(r=0;r<3;r++){
        for(c=0;c<3;c++){
         
          scanf("%d",&m1[r][c]);
        }
       }
       
       for(r=0;r<3;r++){
         for(c=0;c<3;c++){
          if(r==c){
            sum=sum+m1[r];
          }
         }
       }
       printf("sum of diagonal elements=%d\n",sum);
       
       return 0;

}