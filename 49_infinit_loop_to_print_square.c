#include <stdio.h>

int main()
{
  int n;
  for (int i = 0; i < 1;)
  {
    printf("enter the value you want to get square of and -1 for exiting  \n");
    scanf("%d", &n);

    if (n == -1)
    {
      break;
    }

    printf("the square is : %d  \n", n * n);
  }

  return 0;
}