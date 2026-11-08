#include <stdio.h>

int main (){

  long  kilo;
  const float mile_per_km = 0.621371;

  printf("welcome to kilometer to mile converter\n\n");
  printf("please enter a value in kilometer:");
  scanf("%ld", &kilo);

  long mile = kilo* mile_per_km;

  printf("the distance in mile is %ld  \n",mile);
  

 
  





  return 0;
}