

#include<stdio.h>
int main(){
  int m1[2][2],m2[2][2],r,c;
  printf("enter matrix element\n");
       for(r=0;r<3;r++){
        for(c=0;c<3;c++){
         
          scanf("%d",&m1[r][c]);
        }
       }
       
       for(r=0;r<3;r++){
         for(c=0;c<3;c++){
          t[r][c]=m1[c][r];
         }
       }
       printf("transpose of matrix\n");
       for(r=0;r<3;r++){
        for(c=0;c<3;c++){
          
          printf("%d",t[r][c]);
        }
        printf("\n");
       }
       return 0;

}