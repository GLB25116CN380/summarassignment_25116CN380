


#include<stdio.h>
    int main(){
      int a[100],n,i,j;
      int maxfreq=0,freq,element;
      printf("enter number of elements");
      scanf("%d", &n);
      printf("enter the array elements");
      for(i=0;i<n;i++){
        scanf("%d", &a[i]);
      } 
      for(i=0;i<n;i++){
        freq=1;
        for(j=i+1;j<n;j++){
          if(a[i]==a[j]){
            freq++;
          }
        }
        if(freq>maxfreq){
          maxfreq=freq;
          element=a[i];
        }
      }
      printf("maximum frequency element=%d\n", element);
      printf("frequency=%d\n", maxfreq);



  return 0;
}