

#include<stdio.h>
int main(){
  int m1[2][2],m2[2][2],m3[3][3],r,c;
  printf("enter 1st matrix element\n");
       for(r=0;r<3;r++){
        for(c=0;c<3;c++){
         
          scanf("%d",&m1[r][c]);
        }
       }
       printf("enter 2nd  matrix elements");
       for(r=0;r<3;r++){
         for(c=0;c<3;c++){
          scanf("%d",&m2[r][c]);
         }
       }
       printf("addition of two matrices is\n");
       for(r=0;r<3;r++){
        for(c=0;c<3;c++){
          m3[r][c]=m1[r][c]+m2[r][c];
          printf("%d",m3[r][c]);
        }
        printf("\n");
       }

}