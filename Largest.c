#include <stdio.h>

int main() {
   int arr[]={12,4,32,12,6,8},i,j,temp;
   int size = sizeof(arr) / sizeof(arr[0]);
  for(i=0;i<size;i++)
  {
      for(j=i+1;j<size;j++)
      {
          if(arr[j]>arr[i])
          {
              temp=arr[i];
              arr[i]=arr[j];
              arr[j]=temp;
          }
      }
  }
   printf("Largest Number %d \n",arr[0]);
   printf("Smallest Number %d",arr[size-1]);
    return 0;
}