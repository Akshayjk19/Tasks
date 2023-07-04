#include <stdio.h>

int main() {
    
    int num,rem,sum=0,temp;
    
    printf("Enter the number:");
    scanf("%d",&num);
    temp=num;
    
    while(num>0)
    {
        rem=num%10;
        sum=sum+(rem*rem*rem);
        num=num/10;
    }
    
    if(temp==sum)
    {
        printf("Number is Armstrong");
    }else{
        printf("Number is Not Armstrong");
    }
    
    return 0;
}