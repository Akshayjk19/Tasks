#include <stdio.h>

int main() {
    int limit,i,j;
    
    printf("Enter The Limit:");
    scanf("%d",&limit);
    
    for(i=0;i<limit;i++)
    {
        for(j=0;j<=i;j++)
        {
            printf("%d",limit-j);
        }
        printf("\n");
    }
    return 0;
}