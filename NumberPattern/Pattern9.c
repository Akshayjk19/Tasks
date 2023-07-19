#include <stdio.h>

int main() {
    int limit,i,j;
    
    printf("Enter The Limit:");
    scanf("%d",&limit);
    
    for(i=0;i<limit;i++)
    {
        for(j=1;j<=limit-i;j++)
        {
            printf("%d",j);
        }
        printf("\n");
    }
    return 0;
}