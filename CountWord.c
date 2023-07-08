#include <stdio.h>
#include <string.h>

int main() {
   char string[]="I am Akshay jhon 2";
   int count=0,i;
   
  
   for(i=0;i<strlen(string);i++)
   {
       if(string[i]==' ' && isalpha(string[i+1]))
       {
           count++;
       }
   }
    printf("Number of word:%d",count+1);
   
    return 0;
}