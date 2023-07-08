#include <stdio.h>
#include <string.h>
#include <ctype.h>

int main() {
   int vowels=0,contz=0,i,len;
   char word[100],wrd;
   printf("Enter The word:");
   scanf("%s",word);
  
   for(i=0;i<strlen(word);i++)
   {
     wrd =tolower(word[i]);
       if(wrd=='a' || wrd=='e' || wrd=='i' || wrd=='o' || wrd=='u')
       {
       vowels++;
   }else{
       contz++;
   }
   }
   
   printf("Vowels:%d\nConsonants: %d",vowels,contz);
    return 0;
}