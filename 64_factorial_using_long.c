#include <stdio.h>
long long factorial(int num);

int main()
{
  printf("welcome to calculating factorial using long:\n\n");
  int num;
  printf("please enter a number: ");
  scanf("%d", &num);

  long long result = factorial(num);
  printf("the factorial of %d is %ll d  \n", num, result);
  

  return 0;
}

long long factorial(int num)
{

  if (num <= 1)
  {
    return 1;
  }

  return num * factorial(num - 1);
}