#include<stdio.h>
int main(){
    int n[10],i;
    for(i=0;i<10;i++){
        printf("\nenter number");
        scanf("%d", &n[i]);


    }
    printf("array elements are");
    for(i=0;i<10;i++){
        printf("%d", n[i]);
    }


    return 0;
}