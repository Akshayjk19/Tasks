#include <stdio.h>
#include <string.h>


int main() {
   char string[]="I am Akshay";
   int i,j,len;
   len=strlen(string);
   printf("Space Removed:");
   for(i=0;i<len;i++)
   {
       if(string[i]==' ')
       {
           for(j=i;j<len;j++)
           {
               string[j]=string[j+1];
           }
       }
      
   }
    printf("%s",string);
    return 0;
}