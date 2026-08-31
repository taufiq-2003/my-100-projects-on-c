#include <stdio.h>


int main()
{ 
   int number;
  printf("\nwelcome to the program for checking armstrong number  \n");

  printf("enter the number you want to check:  \n");
  scanf("%d", &number); 

  int temp;
  int sum = 0;
  int copy = number;

  for (int i = 0; copy > 0;)
  {
    temp = copy % 10;

    sum = sum + (temp*temp*temp);
    copy = copy / 10;

  }

  if (sum == number)
  {
    printf("the number %d is an armstrong number  \n",number);
    
  }
  else
  {
    
    printf("the number %d is not  an armstrong number  \n",number);
  }
  
  
  
  
}