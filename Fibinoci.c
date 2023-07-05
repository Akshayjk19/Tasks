#include <stdio.h>

int main() {
    int num1=0,num2=1,num,i,limit;
    
    printf("Enter the number:");
    scanf("%d",&limit);
    
    for(i=0;i<limit;i++)
    {
        num=num1+num2;
        printf("%d ",num);
        num1=num2;
        num2=num;
    }
    
    return 0;
}