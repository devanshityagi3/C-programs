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
        temp=a[i];
        j=i+1;

        while(j>=0 && a[j]>temp)
        {
            a[j+1]=a[j];
             j--;
        }
        a[j+1]=temp;
    printf("Array after sorting");
    for(i=0;i<n;i++){
       printf("%d\n", a[i]);
    }   
    }
