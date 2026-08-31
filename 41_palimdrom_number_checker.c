#include <stdio.h> 

int main()
{ 
  int number;
  printf("\n welcome to the finding palidbom number  \n");

  printf("enter the number:  \n");
  scanf("%d", &number);

  int temp;
  int reverse=0;
  int copy=number;

  for (int i = 0; 0 < copy;)
  {
    temp = copy%10;
    reverse= (reverse * 10)+temp;
    copy = copy / 10;

  }
    
  
  
  if ( number == reverse )
  {
    printf("the  number %d is a palidom number \n",reverse);
    
  }
else
{
  printf("the number %d is not palindrom number  \n");
  
}

  return 0;

}