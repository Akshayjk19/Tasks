#include <stdio.h>
#include <string.h>

int main()
{
    char word[] = "i am a doctor";
    char replace[] = "--";
    char result[100];  

    int j = 0;
    for (int i = 0; i < strlen(word); i++) {
        if (word[i] == ' ') {
            for (int k = 0; k < strlen(replace); k++) {
                result[j] = replace[k];
                j++;
            }
        } else {
            result[j] = word[i];
            j++;
        }
    }
    printf("Replaced Word: %s", result);

    return 0;
}