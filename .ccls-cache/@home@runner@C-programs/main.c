#include <stdio.h>

int main(void) {
  int a[10], i,j,n,loc,val;
  printf("enter number of elements:");
  scanf("%d", &n);
  printf("Enter array elements:");
  for(i=0;i<n;i++){
    scanf("%d", &a[i]);
  }
  printf("Array elements are");
  for(i=0;i<n;i++){
    printf("%d", a[i]);
  }  
  printf("Enter the value");
  scanf("%d", &val);
  printf("Enter location");
  scanf("%d", &loc);
  for(i=n-1;i<loc-1;i--){
    a[i+1]=a[i];
  }
  a[loc-1]=val;
  return 0;
}