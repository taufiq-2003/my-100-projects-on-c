#include <stdio.h>

int main (){


  int abul =54;
   int *operator = &abul;

   
  
   *operator =456;

   printf("the value will be : %d  \n", *operator);
   printf("the value will be : %d  \n",  abul);
   

}