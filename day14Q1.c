

#include<stdio.h>
 int main(){
    int n,a,i,count=0;
    printf("enter the number of elements in array\n");
    scanf("%d", &n);
    int array[n];
    printf("enter the numbers in the array\n");
    for(i=0;i<n;i++)
       scanf("%d", &array[i]);
    printf("enter the numbe to be searched");
    scanf("%d", &a);
    
    
    for(i=0;i<n;i++){
        if(array[i]==a){
            printf("%d is present %d\n",a,i+1);
            count++;
        }
    }
    if(count==0)
      printf("%d is not present\n",a);
    else
      printf("%d is present %d times",a,count);

  return 0;
}