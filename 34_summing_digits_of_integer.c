#include <stdio.h>

int main()
{
  int number;
  printf("\n \n \nwelcome to the summing digits of the integer  \n");

  printf("enter the number:  \n");
  scanf("%d", &number);
  int temp;
  int sum = 0;

  for (int i = 0; number > 0;)
  {
    temp = number % 10;

    number = number / 10;
    sum = sum + temp;

  }
  
  printf("THE sum of the digits of the integer is %d  \n", sum);

  //   temp= number%10 ;
  //   printf("digit %d  \n",temp);
  //   number = number /10;
  //   sum = sum+temp;

  //  printf("remain%d  \n",number);
  //  printf("sum %d  \n",sum);

  //  temp= number%10 ;
  //  printf("digit %d  \n",temp);
  //  number = number /10;
  //  sum = sum+temp;

  // printf("remsin %d  \n",number);
  // printf("sum %d  \n",sum);

  return 0;
}