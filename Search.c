#include <stdio.h>
int main()
{
  int arr[100], search, i, size;

  printf("Enter The Size: ");
  scanf("%d",&size);

  printf("Enter The Elements:");
  for(i=0;i<size;i++)
  {
    scanf("%d",&arr[i]);
  }

  printf("Enter a number to search:");
  scanf("%d",&search);

  for(i=0;i<size;i++)
  {
    if (arr[i] == search)    
    {
      printf("%d in the %d postion",search,i+1);
      break;
    }
  }
  if (i == size)
     printf("%d Not in Array", search);

  return 0;
}