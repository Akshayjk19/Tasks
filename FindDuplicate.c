#include <stdio.h>
#include <stdbool.h>
#include <string.h>

int main()
{
    char string[256];
    printf("Enter a string: ");
    scanf("%s", string);
    int len = strlen(string);
    bool ch[256] ={false};
    for (int i = 0; i < len; i++) {
        int p = string[i];

        if (ch[p]) {
            printf("There are duplicate characters in %s", string);
            return 0;
        }

        ch[p] = true;
    }

    printf("Characters are unique in %s", string);

    return 0;
}