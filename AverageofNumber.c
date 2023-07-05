#include <stdio.h>

int main() {
    int num,sum=0,i;
    float avg;
    printf("Enter the number:");
    scanf("%d",&num);
    
    for(i=1;i<=num;i++)
    {
        sum=sum+i;
    }
    avg=sum/num;
    printf("Average:%.2f ",avg);
    return 0;
}