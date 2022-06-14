#include <stdio.h>

int main(void) {
  int a[10], i,j,n,loc;
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
  printf("Enter location");
  scanf("%d", &loc);
  for(i=loc-1;i<;i++){
    a[i]=a[i+1];
  }
  n--;
  printf("Array after insertion:");
  for(i=0;i<n;i++){
    printf("%d", a[i]);
  } 
  return 0;
}