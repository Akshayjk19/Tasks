#include <stdio.h>

int main() {
  int array[10],i,j,size,temp;
  
  printf("Enter the size of array:");
  scanf("%d",&size);
  
  printf("Enter the elements:");
  for(i=0;i<size;i++)
  {
  scanf("%d",&array[i]);
  }
 
 printf("Sorted Array:");
 for(i=0;i<size;i++)
 {
     for(j=i+1;j<size;j++)
     {
         if(array[j]>array[i])
         {
             temp=array[i];
             array[i]=array[j];
             array[j]=temp;
         }
     }
     printf("%d ",array[i]);
 }
 printf("\nLargest Number : %d",array[0]);
  
    return 0;
}