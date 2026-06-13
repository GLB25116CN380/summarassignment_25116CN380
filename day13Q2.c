#include<stdio.h>
void  main(){
    int a[10],i,n,sum=0;
    float average;
    printf("how many elements");
    scanf("%d", &n);
    printf("enter the elements\n");
    for(i=0;i<n;i++)
        scanf("%d", &a[i]);
    for(i=0;i<n;i++)
     sum=sum+a[i];
     average=(float)sum/n;
     printf("sum=%d",sum);
     printf("average=%f",average);
    

    return 0;
}