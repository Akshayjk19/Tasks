#include <stdio.h>

int main() {
   int array1[10][10],array2[10][10],sum[10][10],i,j,size;
   
   printf("Enter the size:");
   scanf("%d",&size);
   
   printf("Array1 :");
   for(i=0;i<size;i++)
   {
       for(j=0;j<size;j++)
       {
           scanf("%d",&array1[i][j]);
       }
   }
   
   printf("Array2:");
    for(i=0;i<size;i++)
   {
       for(j=0;j<size;j++)
       {
           scanf("%d",&array2[i][j]);
       }
   }
   
   for(i=0;i<size;i++)
   {
       for(j=0;j<size;j++)
       {
           sum[i][j]=array1[i][j]+array2[i][j];
       }
   }
      printf("Sum:\n");
   for(i=0;i<size;i++)
   {
       for(j=0;j<size;j++)
       {
           printf("%d ",sum[i][j]);
       }
         printf("\n");
   }
  
    return 0;
}