#include <stdio.h>

int main() {
   int array[10],i,size;
   
   printf("Enter The size:");
   scanf("%d",&size);
   
   printf("Enter the elements :");
   for(i=0;i<size;i++)
   {
       scanf("%d",&array[i]);
   }
   
   printf("Even numbers in array:");
   for(i=0;i<size;i++)
   {
       if(array[i]%2==0)
       {
           printf("%d ",array[i]);
       }
   }
    printf("\nOdd numbers in array:");
   for(i=0;i<size;i++)
   {
       if(array[i]%2!=0)
       {
           printf("%d ",array[i]);
       }
   }
    return 0;
}