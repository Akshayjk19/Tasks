#include <stdio.h>

int main() {
    int limit,i,j,k=1;
    
    printf("Enter The Limit:");
    scanf("%d",&limit);
    
    for(i=1;i<=limit;i++)
    {
        for(j=0;j<i;j++)
        {
            printf("%d",k);
            k=k+1;
        }
        printf("\n");
    }
    return 0;
}