#include <stdio.h>

int main()
{
  int number;
  printf("welcome to the prime number program  \n");
  printf("enter the number  \n");
  scanf(" %d", &number);

  
  for (int i = 2; i < number; i++)
  {
    if (number % i == 0)
    {
      printf("%d is not a prime number  \n", number);
      
      return 0;
    }
  }

  
    printf("the number %d is a prime number  \n", number);
  

  return 0;
}