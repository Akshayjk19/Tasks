#include <stdio.h>
#include <stdbool.h>
#include <string.h>
#include <ctype.h>

int main() {
    char string[256];
    printf("Enter a string: ");
    scanf("%[^\n]",string);
    
    int vowels=0,i,len = strlen(string);

    for (i=0;i<len;i++) 
    {
        char ch=tolower(string[i]);
        if (ch=='a'||ch=='e'||ch=='i'||ch=='o'||ch=='u')
        {
            vowels++;
            if (vowels >= 3)
            {
                printf("The string is false");
                return 0;
            }
        }
    }

    printf("The string is true");
    return 0;
}