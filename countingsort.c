#include<stdio.h>
void main(){
    int a[5], i,j,max=0, n,output[5] ;
    printf("Enter array elements:");
    for(i=0;i<5;i++){
       scanf("%d", &a[i]);
    }
    printf("Array elements are");
    for(i=0;i<5;i++){
       printf("%d\n", a[i]);
    } 
    for(i=0;i<5;i++){  // finding maximum element
       if(a[i]>max)
         max=a[i];
    }
  int count[max+1];
  printf("count array");
  for(i=0;i<=max;i++){
       count[i]=0;     //putting 0 at every index of count array
       printf("%d\n", count[i]);
    } 
    for(i=0;i<5;i++){
        count[a[i]]++;
    }
    for(i=1;i<=max;i++){       //i starts from 1 because changes are being made to count array only, no new array will be created.
        count[i]=count[i] + count[i-1]; //creating cummulative array
    }
     for(i=4;i>=0;i--){
        output[count[a[i]]-1]= a[i];
       count[a[i]]--;
    }
    printf("Array after sorting");
    for(i=0;i<5;i++){
       printf("%d\n", output[i]);
    }   
}
