#include <stdio.h>

int main() {
    int array[10],i,j,temp,size;
    
    printf("Enter the size:");
    scanf("%d",&size);
    
    printf("Enter the elements:");
    for(i=0;i<size;i++)
    {
        scanf("%d",&array[i]);
    }
    
    printf("Ascending order:");
    for(i=0;i<size;i++)
    {
        for(j=i+1;j<size;j++)
        {
            if(array[i]>array[j])
            {
                temp=array[i];
                array[i]=array[j];
                array[j]=temp;
            }
        }
        printf("%d ",array[i]);
    }

    return 0;
}