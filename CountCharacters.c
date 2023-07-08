#include <stdio.h>
#include <string.h>


int main() {
   char string[]="I am Akshay";
   int count=0,i;
   
   for(i=0;i<strlen(string);i++)
   {
       if(string[i]!=' ')
       {
           count++;
       }
   }
    printf("Number of characters:%d",count);
   
    return 0;
}