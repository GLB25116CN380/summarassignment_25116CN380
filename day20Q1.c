

#include<stdio.h>
int main(){
  int a[10][10],b[10][10],mul[10][10],rows,cols;
  printf("enter the number of rows");
  scanf("%d",&rows);
  printf("enter the number of cols");
  scanf("%d",&cols);
  printf("\n enter the elements of the first matrix");
  for(int i=0;i<rows;i++){
    for(int j=0;j<cols;j++){
      scanf("%d",&a[i][j]);
    }
  }
  printf("\n enter the elements of the second matrix");
  for(int i=0;i<rows;i++){
    for(int j=0;j<cols;j++){
      scanf("%d",&b[i][j]);
    }
  }
  for(int i=0;i<rows;i++){
    for(int j=0;j<rows;j++){
      mul[i][j]=0;
      for(int k=0;k<cols;k++){
        mul[i][j]+=a[i][k]*b[k][j];
      }
    }
  }
  return 0;
}