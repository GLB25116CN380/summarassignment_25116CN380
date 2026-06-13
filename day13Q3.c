#include<stdio.h>
int  main(){
    int arr[20],min,max,n,i;
    printf("\n enter the number of elements");
    scanf("%d", &n);
    printf("\n enter elements of array");
    for(i=0;i<n;i++)
    scanf("%d", &arr[i]);
    printf("\n elements of array");
    for(i=0;i<n;i++)
    printf("%d", arr[i]);
    min=max=arr[0];
    for(i=0;i<n;i++){
        if(arr[i]>max)
        max=arr[i];
        if(arr[i]<min)
        min=arr
    }
   
    return 0;
}