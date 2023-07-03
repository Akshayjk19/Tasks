#include <stdio.h>
int main() {
   int i,j,arr[100],size,temp;
   printf("Enter The Size:");
   scanf("%d",&size);
   printf("Enter The Element To Array:");
   for(i=0;i<size;i++)
   {
       scanf("%d",&arr[i]);
   }
   printf("Sorted Array:");
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
       printf("%d ",arr[i]);
   }
    return 0;
}