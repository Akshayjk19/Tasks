#include <stdio.h>
#include <string.h>

int main() {
    char string[10];
    int i,len,flag=0;
    
    printf("Enter a word:");
    scanf("%s",string);
    len=strlen(string);
    for(i=0;i<len;i++)
    {
        if(string[i]!=string[len-i-1])
        {
            flag=1;
            break;
        }
    }
    if(flag==0)
    {
        printf("%s is palindrome",string);
    }else{
        printf("%s is not palindrome",string);
    }

    return 0;
}