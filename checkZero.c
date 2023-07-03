#include<stdio.h>

int main ()
{
    int i,arr[100],Size,count=0;

    printf("Enter The Size");
    scanf("%d",&Size);

    printf("Enter The Array Elements:");

    for(i=0;i<Size;i++)
    {
        scanf("%d",&arr[i]);
        if(arr[i] == 0)
        {
            count++;
        }
    }
if(count == 1)
{
    printf("The array has one and only one zero.");
}else{
    printf("The Array Has More Than One Zero");
    
}