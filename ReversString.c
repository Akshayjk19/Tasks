#include <stdio.h>
#include <string.h>

int main() {
   char string[]="hello",temp;
   int i,j,len=strlen(string);
   
   printf("Reverse:");
   for(i=0;i<=len/2;i++)
   {
      
           temp=string[i];
           string[i]=string[len-i-1];
           string[len-i-1]=temp;
   }
   printf("%s",string);
   
    return 0;
}