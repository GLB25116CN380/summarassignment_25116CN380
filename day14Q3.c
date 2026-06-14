

int main(){
   int a[6],max1,max2,i;
   printf("enter the 6 element");
   for(i=0;i<6;i++)
   scanf("%d", &a[i]);
   max1=max2=a[0];
   for(i=1;i<6;i++){
    if(max1<a[i]){
        max2=max1;
        max1=a[i];
    }
   elseif(max2<a[i] && a[i]!=max1){
    max2=max1;
   }

   } 
    printf("the second largest element is %d", max2);
    getch();
   
  return 0;
}