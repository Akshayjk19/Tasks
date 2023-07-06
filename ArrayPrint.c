#include <stdio.h>

int main() {
  int array[10],i,size;
  
  printf("Enter the size of array:");
  scanf("%d",&size);
  
  printf("Enter the elements:");
  for(i=0;i<size;i++)
  {
  scanf("%d",&array[i]);
  }
  printf("Array elements:");
  for(i=0;i<size;i++)
  {
      printf("%d ",array[i]);
  }
  
    return 0;
}