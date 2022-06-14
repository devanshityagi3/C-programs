#include<stdio.h>
void main(){
    int a[10], i,j,temp,n ;
    printf("enter number of elements:");
    scanf("%d", &n);
    printf("Enter array elements:");
    for(i=0;i<n;i++){
       scanf("%d", &a[i]);
    }
    printf("Array elements are");
    for(i=0;i<n;i++){
       printf("%d\n", a[i]);
    } 
    for(i=0;i<n;i++){
       for(j=0;j<n-i-1;j++){ //j will run till n-i-1 because when the first pass will finish, the largest element will get fix at (n-1)th 
        if(a[j]>a[j+1]){     //position then in the next pass why compare (n-2)th element with (n-1)th. It will waste our memory. 
            temp=a[j];
            a[j]=a[j+1];
            a[j+1]=temp;
        }
       }
    }
    printf("Array after sorting");
    for(i=0;i<n;i++){
       printf("%d\n", a[i]);
    }   
}
