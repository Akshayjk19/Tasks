#include <stdio.h>

int main() {
    int num,sum=0,i;
    printf("Enter the number:");
    scanf("%d",&num);
    for(i=1;i<=num;i++)
    {
        sum=sum+i;
    }
    printf("Sum of number:%d",sum);
    return 0;
}