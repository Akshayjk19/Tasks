#include <stdio.h>

int main() {
  int num,i,flag=0;
  
  printf("Enter The Number");
  scanf("%d",&num);
  
  for(i=2;i<=num/2;i++)
  {
      if(num%i==0)
      {
          flag=1;
          break;
      }
  }
  if(flag == 1)
  {
         printf("Number Is Not Prime");   
  }else{

      printf("Number Is Prime ");
  }
    return 0;
}