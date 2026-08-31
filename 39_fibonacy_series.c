#include <stdio.h> 

int main()
{ 
    int number;
  printf("\nwelcome to the printing of fibonacci series  \n");

  printf("enter the number you want to print the fibonacci series of:  \n");
  scanf("%d", &number);

  printf(" 0");
  printf(" 1");
  
  
  int temp =0;
  int prev=0;
  int next = 1;

  while (next<=number-prev)
  {
    temp= prev+next;
    printf(" %d",temp);
    prev= next;
    next= temp;

   
  }
  
  


 
return 0;
}