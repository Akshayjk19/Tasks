#include <stdio.h>
#include <string.h>

int main() {
    char string[256];
    printf("Enter a string: ");
    scanf("%s",string);

    int len=strlen(string),p=0,i;
    char result[256];

    for (i=0;i<len;i++)
    {
        char ch = string[i];
        int flag= 0;
        
        for (int j = 0; j < p; j++) {
            if (result[j] == ch) {
                flag= 1;
                break;
            }
        }
        if (!flag) {
            result[p++] = ch;
        }
    }
    printf("Duplicate removed:%s",result);
    return 0;
}