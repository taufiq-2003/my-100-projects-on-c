#include <stdio.h>

int main()
{
  int num1, num2;
  printf("welcome to the GREATEST COMMON DIVISOR problem  \n");
  printf("enter the two numbers  \n");

  scanf(" %d %d", &num1, &num2);

  

  int min = num1 < num2 ? num1 : num2;

  int a;
  for (int i = 2; i <= min; i++)
  {
    a = i;
    if (num1 % i == 0 && num2 % i == 0)
    {
      break;
    }
    else
    {
      a=1;
    }
    
  }
  printf("the greatest common divisor is %d   \n", a);

  return 0;
}