#include <stdio.h>

int main()
{

  int number;
  printf("\n \n \nwelcome to the reversing digits of the integer  \n");

  printf("enter the number:  \n");
  scanf("%d", &number);
  int temp;
  int reverse = 0;
  int copy = number;

  for (int i = 0; copy > 0;)
  {

    reverse = (reverse * 10) + copy % 10;
    copy = copy / 10;
  }

  printf("%d  \n", reverse);

  // ONLY VISUAL REVERSING NOT ACTUAL INTEGER BEING REVERSED//

  // for (int i = 0; number > 0;)
  // {
  //   temp = number % 10;

  //   number = number / 10;
  //
  //   printf("%d", temp);

  // }

  return 0;
}