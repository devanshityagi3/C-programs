#include<stdio.h>
void main(){
    int a[5], i,j,max, n,count[]={0},output[5] ;
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
    for(i=0;i<n;i++){
        count[a[i]]++;
    }
    for(i=0;i<=max;i++){
        count[i]=count[i] + count[i-1]; //creating cummulative array by adding the previous and current element. no new array has been made,
    }                                   // the changes are made in count array itself.
     for(i=n-1;i>0;i--){
        output[count[a[i]]-1]= a[i];
    }
    printf("Array after sorting");
    for(i=0;i<n;i++){
       printf("%d\n", output[i]);
    }   
}
