

#include<stdio.h>
 int main(){
   int a[10],i,freq=0,key;
   for(i=0;i<10;i++){
    printf("\nenter number");
    scanf("%d", &a[i]);

   }
   printf("\nenter number to find frequency");
   scanf("%d", &key);
   for(i=0;i<10;i++){ 
   freq++;
   }
   printf("\nfrequency of %d is %d",key,freq);

  return 0;
}