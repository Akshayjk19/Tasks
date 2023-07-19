#include <stdio.h>

int main() {
    int limit,i,j;
    
    printf("Enter The Limit:");
    scanf("%d",&limit);
    
    for(i=limit;i>0;i--)
    {
        for(j=i;j>0;j--)
        {
            printf("%d ",j);
        }
        printf("\n");
    }
    
    for(i=1;i<=limit;i++)
    {
        for(j=i;j>0;j--)
        {
            printf("%d ",j);
        }
        printf("\n");
    }

    return 0;
}